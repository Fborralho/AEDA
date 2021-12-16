//
// Created by kruddy on 16/12/21.
//

#include "Airport.h"


vector<Plane> Airport::getPlanes() {
    return planes;
}

void Airport::sortPlanes(vector<Plane> &p, int left, int right) {
    string x = p[(right - left) / 2].getPlate();
    int i = left; int j = right;
    for( ; ; ){
        while(p[++i].getPlate() < x);

        while(x < p[--j].getPlate());
        if( i < j){
            swap(p[i], p[j]);
        }
        else break;
    }
    swap(p[i], p[right -1]);
    sortPlanes(p, left, i-1);
    sortPlanes(p, i+1, right);
}