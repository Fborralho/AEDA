//
// Created by kruddy on 13/12/21.
//

#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H
#include "flight.h"
#include "service.h"
#include <vector>
using namespace std;

class Plane {
    string plate;
    vector<Flight> flight_plan;
    int seats;
    queue<Service> services;
    int fullDur=0;
    int numBag = 0;
public:
    string getPlate() const;
    queue<Service> ser_done;
    Plane(string p, int s);
    int getSeats() const;
    void buySeats(int n, int bag);
    queue<Service> getServices();
    void rem_service();/// removes the next service in queue and adds in done
    void add_service(Service &s);/// adds a new service in queue
    bool operator< (Plane &p);
    void addFLight(const Flight &f1);
    vector<Flight> getPlan() const;
    int getDur() const;
    bool delFlight(Flight f);


};


#endif //PROJETO_PLANE_H
