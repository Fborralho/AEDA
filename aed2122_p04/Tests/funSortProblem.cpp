#include "funSortProblem.h"
#include <algorithm>

FunSortProblem::FunSortProblem() {}


//-----------------------------------------------------------------

// TODO
void FunSortProblem::expressLane(vector<Product> &products, unsigned k) {

    for(int i = 0; i < products.size() ; i++){
        for(int j = 0 ; j < products.size() ; j++){
            if(j == i){
                continue;
            }
            else if( products[i].getPrice() < products[j].getPrice()){
                swap(products[j], products[i]);
            }
            else if(products[i].getPrice() == products[j].getPrice()){
                if(products[i].getWeight() < products[j].getWeight()){
                    swap(products[j], products[i]);
                }
            }
        }
    }

    while(products.size() > k){
        products.pop_back();
    }
}

// TODO
int FunSortProblem::minDifference(const vector<unsigned> &values, unsigned nc) {
    if(values.size() < nc){
        return -1;
    }
    //ORDENAR O VETOR POR ORDEM E ESCOLHER O MAXIMO /  MINIMO DO NC
}


// TODO
unsigned FunSortProblem::minPlatforms (const vector<float> &arrival, const vector<float> &departure) {
    return 0;
}


// TODO

void FunSortProblem::nutsBolts(vector<Piece> &nuts, vector<Piece> &bolts) {

}

