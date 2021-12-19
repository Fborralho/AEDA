//
// Created by kruddy on 16/12/21.
//

#include "Airport.h"

vector<Plane> Airport::getPlanes() {
    return planes;
}

void Airport::sortByPlate(){
    for(int i = 0; i < planes.size()-1; i++){
        unsigned  imin = i;
        for(int j = i + 1; j < planes.size(); j++){
            if(planes[j].getPlate() < planes[imin].getPlate()){
                imin = j;
            }
        }
        swap(planes[i], planes[imin]);
    }
}


void Airport::sortByFullDur() {
    for(int i  = 0; i < planes.size() -1 ; i++){
        unsigned imin = i;
        for(int j = i+1; j < planes.size(); j++){
            if(planes[j].getDur() < planes[imin].getDur()){
                imin = j;
            }
        }
        swap(planes[i], planes[imin]);
    }
}


bool Airport::delPlane(Plane p) {
    for(int i = 0; i < planes.size(); i++){
        if(planes[i].getPlate() == p.getPlate()){
            planes.erase(planes.begin()+i);
            return true;
        }
    }
    return false;
}


void Airport::showFlights() const {
    for(int i = 0; i < planes.size(); i++){
        cout << planes[i].getPlate() << endl;
        for(int j = 0; j < planes[i].getPlan().size(); j++){
            planes[i].getPlan()[j].showFlight();
        }
    }
}

