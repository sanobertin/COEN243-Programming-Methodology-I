//
// Created by Bertin Mihigo Sano on 2023-07-26.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#endif //COEN243_CIRCLE_H

#define _USE_MATH_DEFINES
#include <cmath>

class Circle{
private:
    float rad; // radius
    float pi = M_PI;
public:
    Circle(float);
    float area(){
        return (pi*rad*rad);
    }
    float volume(){
        return ((4/3)*pi*pow(rad, 3));
    };
    float circumference(){
        return (2*pi*rad);
    }
};

Circle::Circle(float radius) {
    rad = radius;
}