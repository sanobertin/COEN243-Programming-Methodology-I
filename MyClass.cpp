//
// Created by Bertin Mihigo Sano on 2023-07-14.
//
#include <iostream>
#include "Headers/rectangle.h"
using namespace std;




int main(){
    Rectangle *A = new Rectangle();
    A->area();
    A->perimeter();
    Rectangle B = (*A);
    cout << B.area() << endl;
    return 0;
}