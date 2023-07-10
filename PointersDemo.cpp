//
// Created by Bertin Mihigo Sano on 2023-07-12.
//




#include "iostream"

using namespace std;

int main(){
    int* a;
    int b = 10;
    a = &b;
    cout << (*a == b) <<endl;

    return 0;
}
