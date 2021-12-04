#include <iostream>
#include <vector>

using namespace std;

template <class T>
class MyVector {
    vector<T> values;
public:
    MyVector();
    ~MyVector();
    void push_back(T v1);
    vector<T> getValues() const;
    T max() const;
    bool hasDuplicates() const;
    void removeDuplicates() ;
};


// exception EmptyVector
class EmptyVector
{ };

// methods
template <class T>
MyVector<T>::MyVector() {}

template <class T>
MyVector<T>::~MyVector() {}

template <class T>
void MyVector<T>::push_back(T v1) {
    values.push_back(v1);
}

template <class T>
vector<T> MyVector<T>::getValues() const {
    return values;
}

//---------------------------------

// TODO
template <class T>
T MyVector<T>::max() const {
    T vmax = 0;
    for(int i = 0; i < values.size(); i++){
        if(vmax < values[i])
            vmax = values[i];
    }
    if(vmax == 0) {
        EmptyVector a;
        throw a;
    }
	return vmax;
}

// TODO
template<class T>
bool MyVector<T>::hasDuplicates() const {
    bool res = false;
    for(int i = 0; i < values.size();i++){
        for(int j = i + 1; j < values.size(); j++){
            if(values[i] == values[j]){
                return true;
            }
        }
    }

	return false;
}

// TODO
template<class T>
void MyVector<T>::removeDuplicates() {
    int val;
    for (int i = 0; i < values.size(); i++) {
        val = values[i];
        for (int j = i + 1; j < values.size(); j++) {
            if (val == values[j]) {
                values.erase(values.begin() + j);
                j--;

            }
        }
    }
}

