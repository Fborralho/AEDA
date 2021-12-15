//
// Created by kruddy on 13/12/21.
//

#include "Plane.h"
using namespace std;

int Plane::getSeats() const {
    return seats;
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

