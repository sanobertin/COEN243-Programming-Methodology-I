//
// Created by Bertin Mihigo Sano on 2023-07-26.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H


#include <iostream>

class Rectangle{
private:
    float length, width;

public:
    Rectangle(): length {1}, width{1}{
        //initialize values of width if no args are passed
    }
    Rectangle(float w, float l){
        length = l;
        width = w;
    }
    ~Rectangle(){
        std::cout << "This is the end of object lifecycle for before destruction!\n";
    }
    float area() {
        return (length * width);
        //return dimension;
    }

    float perimeter(){
        return (2*length*width);
    }
protected:
    std::string dimension = "3D";

};

#endif //COEN243_RECTANGLE_H