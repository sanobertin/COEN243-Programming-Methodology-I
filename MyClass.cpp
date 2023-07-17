//
// Created by Bertin Mihigo Sano on 2023-07-14.
//
#include <iostream>
using namespace std;

class rectangle{
    public:
        rectangle(){
            cout << " I just created a rectangle class!" << endl << "This is a constructor" << endl;
        }
        float length;
        float width;
        float area() {
            return (length * width);
            //return dimension;
        }
    protected:
        string dimension = "3D";
    };

static rectangle create_rectangle(){
    rectangle rect;
    return rect;
}

int main(){
    rectangle A = create_rectangle();
    A.width= 12.3;
    A.length= 3.14;
    cout << A.area() << endl;
}