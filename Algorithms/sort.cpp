//
// Created by Bertin Mihigo Sano on 2023-08-09.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    array<double, 5> arr {34,0.23, 2323.343, 2323.2312,8.76897};
    double *p_arr = arr.data();
    for(size_t item:arr){
        cout << item << endl;
    }

    cout << endl << endl;
    // will sort below
    sort(arr.begin(), arr.end());
    for(size_t item:arr){
        cout << item << endl;
    }

}