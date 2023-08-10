// ID 40157663
// Created by Bertin Mihigo Sano on 2023-08-09.
// Lab 6 Challenge

#include "Temperature.h"
using namespace std;

int main(){
    cout << "Load first temperature\n";
    double temperature, temperature_;
    char T_type, T_type_;
    string city, city_;
    cout << "Please enter city name: ";
    cin >> city;
    cout << "What is the unit of temperature?(F for Fahrenheit, C for Centigrade): ";
    cin >> T_type;
    if(T_type =='C'){
        cout <<"You chose celsius, so please enter celsius value: ";
        cin >> temperature;
    }
    else if(T_type =='F'){
        cout <<"You chose fahrenheit, so please enter fahrenheit value: ";
        cin >> temperature;
    }
    else{
        exit(1);
    }
    Temperature *t1 = new Temperature(temperature, T_type, city);
    cout << endl << endl << endl;

    cout << "Load Second temperature\n";
    cout << "Please enter city name: ";
    cin >> city_;
    cout << "What is the unit of temperature?(F for Fahrenheit, C for Centigrade): ";
    cin>> T_type_;
    if(T_type_ =='C'){
        cout <<"You chose celsius, so please enter celsius value: ";
        cin >> temperature_;
    }
    else if(T_type_ =='F'){
        cout <<"You chose fahrenheit, so please enter fahrenheit value: ";
        cin >> temperature_;
    }
    else{
        exit(1);
    }
    Temperature *t2= new Temperature(temperature_, T_type_, city_);
    cout << "***************************************************\n";
    t1->Compare(t2); //t2 is pointer
    cout << "***************************************************\n";
    t2->Compare(t1);


    // end of program
    delete t1;
    delete t2;
    return 0;
}
