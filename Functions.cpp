//
// Created by oleg on 04.10.2020.
//

#include "Functions.h"
using namespace std;
template <typename T>void FillRand(T arr[], const int n){
    for (int i = 0; i < n; i++){
        arr[i] = rand()%1000/(double)100;
    }
}
template <typename T>void Print(const T arr[], const int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << tab;
    }
    cout << endl;
}