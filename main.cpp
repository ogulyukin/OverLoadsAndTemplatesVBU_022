#include <iostream>
#define tab "\t"
using namespace std;
void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
void FillRand(double arr[], const int n);
void Print(const double arr[], const int n);

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
