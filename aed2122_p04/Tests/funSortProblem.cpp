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
    vector<float> ar = arrival;
    vector<float> de = departure;
    int max_count = 0;
    int count;
    int ind;
    for(int i = 0; i < ar.size(); i++){
        float aux = ar[i];
        unsigned  j;
        for(j  = i; j > 0 && aux < ar[j-1]; j--){
            ar[j] = ar[j-1];
        }
        ar[j] = aux;
    }

    for(int i = 0; i < de.size(); i++){
        float aux = de[i];
        unsigned  j;
        for(j  = i; j > 0 && aux < de[j-1]; j--){
            de[j] = de[j-1];
        }
        de[j] = aux;
    }


    for(int i = 0; i < de.size(); i++){
        ind = i;
        count = 0;
        while(de[i] >= ar[ind]){
            count ++;
            ind++;
            if(count > max_count){
                max_count = count;
            }
            if(ind == ar.size()){
                return max_count;
            }
        }
    }
    return max_count;
}


// TODO

void FunSortProblem::nutsBolts(vector<Piece> &nuts, vector<Piece> &bolts) {

}

