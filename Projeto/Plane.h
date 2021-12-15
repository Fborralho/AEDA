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
public:
    queue<Service> ser_done;
    Plane(string p, vector<Flight> f, int s, queue<Service> serv): plate(p),flight_plan(f), seats(s), services(serv){}
    int getSeats() const;
    void buySeats(int n, vector<bool>& bagage);
    queue<Service> getServices();
    void rem_service();/// removes the next service in queue and adds in done
    void add_service(Service &s);/// adds a new service in queue
    void sortFlightsDur(vector<Flight>&f, int left, int right);

};


#endif //PROJETO_PLANE_H
