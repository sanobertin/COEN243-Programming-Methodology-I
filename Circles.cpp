//
// Created by Bertin Mihigo Sano on 2023-07-26.
//

#include <iostream>
#include "Headers/Circle.h"
using namespace std;


int main(){
    cout << "What's the radius:";
    float rad;
    cin >> rad;
    cout << endl;
    Circle A(rad);
    cout << A.area() << endl << A.circumference() << endl << A.volume() << endl;
    return 0;
}
