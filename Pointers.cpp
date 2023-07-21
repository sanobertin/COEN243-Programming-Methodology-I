//
// Created by Bertin Mihigo Sano on 2023-07-15.
//


#include <iostream>
using namespace std;
float* fx(float b){ // A function that accepts a value and returns it's address
    //float* ptr = nullptr;
    //ptr = &b;
    return &b;
}


int main(){
    // passing values to a fx by reference
    float a=(22.0/7.0);
    cout << a << endl;
    cout << &a << endl;
    cout << fx(a) << endl;
    cout << (fx(a)== &a) << endl;

    return 0;
}