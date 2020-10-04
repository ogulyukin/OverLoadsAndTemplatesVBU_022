#include <iostream>
#define tab "\t"
using namespace std;
template <typename T>void FillRand(T arr[], const int n);
template <typename T>void Print(const T arr[], const int n);


int main() {
    setlocale(LC_ALL, "");
    const int n = 5;
    int arr[n];
    FillRand(arr, n);
    Print(arr, n);
    const int m = 10;
    double brr[m];
    FillRand(brr,m);
    Print(brr,m);
    return 0;
}
template <typename T>void FillRand(T arr[], const int n){
    for (int i = 0; i < n; i++){
        arr[i] = rand()%100;
    }
}
template <typename T>void Print(const T arr[], const int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << tab;
    }
    cout << endl;
}
