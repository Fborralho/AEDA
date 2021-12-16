//
// Created by kruddy on 13/12/21.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include <iostream>
#include <list>


using namespace std;

class Flight {
    int num_flight, flight_dur;
    string departure_date, arrival_date, city_departure, city_arrival;
public:
    Flight(int n, int fli_du, string dd, string ad, string cd, string ca):
    num_flight(n), flight_dur(fli_du), departure_date(dd),
    arrival_date(ad), city_departure(cd), city_arrival(ca){}

    int getDuration();
    string getArrivalDate();
    string getDepartureDate();
    string getCityDep();
    string getCityArr();
    int getNum();

};


#endif //PROJETO_FLIGHT_H
