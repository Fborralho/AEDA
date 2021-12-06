#ifndef SRC_FUNSORTP_H_
#define SRC_FUNSORTP_H_

#include <iostream>
#include <vector>
#include "product.h"
#include "piece.h"

using namespace std;

template <class Comparable>
        void QuickSort(vector<Comparable> &v, int left, int right){
    Comparable x = (right - left) / 2;
    int i = left; int j= right -1 ;
    while( i <= j){
        while(v[++i] < x);
        while(v[--j] > x);
        if( i < j ){
            swap(v[i], v[j]);
        }
    }
    swap(v[i], v[right -1]);
    QuickSort(v, left, i -1);
    QuickSort(v, i + 1, right);
        }

class FunSortProblem{
public:
    FunSortProblem();
    static void expressLane(vector<Product> &products, unsigned k);
    static int minDifference(const vector<unsigned> &values, unsigned nc);
    static unsigned minPlatforms (const vector<float> &arrival, const vector<float> &departure);
    static void nutsBolts(vector<Piece> &nuts, vector<Piece> &bolds);
};

#endif