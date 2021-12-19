//
// Created by kruddy on 16/12/21.
//

#ifndef PROJETO_AIRPORT_H
#define PROJETO_AIRPORT_H
#include "Plane.h"
#include <stack>

using namespace std;

class Airport {
string city;
vector<Plane> planes;
public:
    Airport(string c, vector<Plane> &p): city(c), planes(p){}
    vector<Plane> getPlanes();
    void sortByPlate();
    void sortByFullDur();
    bool delPlane(Plane p);
    void showFlights() const;

};


#endif //PROJETO_AIRPORT_H
