#include <iostream>
#define tab "\t"
#include "Functions.h"
#include "Functions.cpp"
using namespace std;
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

