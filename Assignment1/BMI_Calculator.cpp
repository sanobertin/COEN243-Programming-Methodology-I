 /*
  * Write a C++ program that asks the user to enter his/her height in meters
  * and his/her weight in kilograms and calculates the BMI index based on the following formula:
  */

 // BMI = mass(kg) divided by height(meters)^2

#include <iostream>

using namespace std;

int main()
{
    float mass, height, BMI;
    cout << "I will help you know your BMI index" << endl;
    cout << "Type in your weight in kilograms" << endl;
    cin >> mass;
    cout << "Type in your height in meters(m)" << endl;
    cin >> height;
    BMI = mass / (height*height);
    cout << endl << "Your BMI index is " << BMI <<" kg/m^2" << endl;

    return 0;
}