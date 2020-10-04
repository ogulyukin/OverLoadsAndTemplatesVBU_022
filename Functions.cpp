//
// Created by oleg on 04.10.2020.
//
//
using namespace std;

void FillRand(int arr[], const int n){
    for (int i = 0; i < n; i++){
        arr[i] = rand()%100;
    }
}
void Print(const int arr[], const int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << tab;
    }
    cout << endl;
}
void FillRand(double arr[], const int n){
    for (int i = 0; i < n; i++){
        arr[i] = rand()%1000/(double)100;
    }
}
void Print(const double arr[], const int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << tab;
    }
    cout << endl;
}

