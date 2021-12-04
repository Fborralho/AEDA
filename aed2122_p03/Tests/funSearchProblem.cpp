#include "funSearchProblem.h"

FunSearchProblem::FunSearchProblem() {}

//-----------------------------------------------------------------

// TODO
int FunSearchProblem::facingSun(const vector<int> & values) {
    int count = 1;
    for(int i = 0; i < values.size() - 1; i++){
        if(values[i] < values[i+1]){
            count ++;
        }
    }
    return count;
}

// TODO
int FunSearchProblem::squareR(int num) {

    int aux = num / 2;
    int last_val;
    int a;
    while(true){
        if(aux  * aux == num){
            break;
        }
        else if(aux  * aux > num){
            last_val = aux;
            aux = aux / 2;
        }
        else if(aux * aux < num){
            if((aux + 1) * (aux +1) > num){
                break;
            }
            a = last_val;
            last_val = aux;
            aux = (a - aux);
        }
    }
    return aux;
}

// TODO
int FunSearchProblem::smallestMissingValue(const vector<int> & values) {
    int aux;
    for(int i = 0; i < values.size(); i++){
        if (i == 0){
            aux = values[i];
        }
        if(values[i] < aux && values[i] > 0){
            aux = values[i];
        }
    }
    if(aux > 0){
        return aux;
    }
    return 0;
}

// TODO
int FunSearchProblem::minPages(const vector<int> & values, int numSt) {

    return 0;
}

