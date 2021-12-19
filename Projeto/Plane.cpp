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

void Plane::buySeats(int n, int bag) {
    if(seats >= n){
        seats -= n;
        numBag += bag;
    }

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
    fullDur += f1.getDuration();
}

vector<Flight> Plane::getPlan() const{
    return flight_plan;
}

int Plane::getDur() const {
    return fullDur;
}


bool Plane::delFlight(Flight f) {
    for(int i= 0; i< flight_plan.size(); i++){
        if(flight_plan[i].getNum() == f.getNum()){
            flight_plan.erase(flight_plan.begin()+i);
            return true;
        }
    }
    return false;
}