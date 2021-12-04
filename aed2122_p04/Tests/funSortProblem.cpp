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
    int max = 0;
    int min = values[0];
    vector<unsigned> v(values);
    for(int j = v.size() -1 ; j > 0; j--){
        bool troca = false;
        for(unsigned int i = 0; i < j; i++){
            if(v[i+1] < v[i]){
                swap(v[i], v[i+1]);
                troca = true;
            }
        }
    }
    for(int i = 0; i < nc ; i++){
        if(min > v[i]){
            min = v[i];
        }
        if(max < v[i]){
            max = v[i];
        }
    }
    //ORDENAR O VETOR POR ORDEM E ESCOLHER O MAXIMO /  MINIMO DO NC

    return max - min;
}


// TODO
unsigned FunSortProblem::minPlatforms (const vector<float> &arrival, const vector<float> &departure) {
    return 0;
}


// TODO

void FunSortProblem::nutsBolts(vector<Piece> &nuts, vector<Piece> &bolts) {

}

