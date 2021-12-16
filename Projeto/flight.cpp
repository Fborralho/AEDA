//
// Created by kruddy on 13/12/21.
//

#include "flight.h"

int Flight::getDuration() {
    return flight_dur;
}

int Flight::getNum() {
    return num_flight;
}

string Flight::getArrivalDate() {
    return arrival_date;
}

string Flight::getDepartureDate() {
    return departure_date;
}

string Flight::getCityArr() {
    return city_arrival;
}

string Flight::getCityDep() {
    return city_departure;
}