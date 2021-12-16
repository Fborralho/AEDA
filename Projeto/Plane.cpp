//
// Created by kruddy on 13/12/21.
//

#include "Plane.h"
using namespace std;

Plane::Plane(string p, int s) {
    this->plate = p;
    this-> seats = s;
}
int Plane::getSeats() const {
    return seats;
}

string Plane::getPlate() const {
    return plate;
}

void Plane::buySeats(int n, vector<bool>& bag) {

}

queue<Service> Plane::getServices()  {
    return services;
}

void Plane::rem_service()  {
        ser_done.push(services.front());
        services.pop();
}


void Plane::add_service(Service &s) {
    services.push(s);
}


void Plane::sortFlightsDur(vector<Flight>&f, int left, int right) {
    int x = f[(right - left) / 2].getDuration();
    int i = left; int j = right;
    for( ; ; ){
        while(f[++i].getDuration() < x);
        while(x < f[--j].getDuration());
        if( i < j){
            swap(f[i], f[j]);
        }
        else break;
    }
    swap(f[i], f[right -1]);
    sortFlightsDur(f, left, i-1);
    sortFlightsDur(f, i+1, right);
}

bool Plane::operator< (Plane &p) {
    for(int i = 0; i < p.getPlate().size(); i++){
        if(this->getPlate()[i] != p.getPlate()[i]){
            if(int(this->getPlate()[i]) < int(p.getPlate()[i])){
                return true;
            }
            else{
                return false;
            }
        }
    }
}


void Plane::addFLight(const Flight &f1) {
    flight_plan.push_back(f1);
}

vector<Flight> Plane::getPlan() {
    return flight_plan;
}