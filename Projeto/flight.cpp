//
// Created by kruddy on 13/12/21.
//

#include "flight.h"

int Flight::getDuration() const{
    return flight_dur;
}

int Flight::getNum() const{
    return num_flight;
}

string Flight::getArrivalDate() const{
    return arrival_date;
}

string Flight::getDepartureDate() const{
    return departure_date;
}

string Flight::getCityArr() const{
    return city_arrival;
}

string Flight::getCityDep() const{
    return city_departure;
}

string Flight::showFlight() const {
    cout << "ID -- "<< this->getNum() << endl;
    cout << "Duration -- " << this->getDuration() <<"min"<<  endl;
    cout << "From -- " << this->getCityDep()<< endl;
    cout << "To -- " << this->getCityArr() << endl;
    cout << "Date -- " << this->getDepartureDate() << endl;
}