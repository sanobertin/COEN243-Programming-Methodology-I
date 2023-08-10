// Lab 5 challenge
// Created by Bertin Mihigo Sano on 2023-08-02.
// Student ID 40157663

#include <iostream>
#include "Charger.h"

using namespace std;

int main(){
    // type, power, voltage
    Charger cha1;

    cout << "Charger Types: J1772, CHAdeMO or Supercharger\nPower capacity kW and Voltage Capacity V\n";
    string inputA;
    int inputB, inputC;
    cout <<"what type of charger are we looking for ? \t";
    cin >> inputA;
    cout << "How powerful is it ? \t";
    cin >> inputB;
    cout <<"What is the Voltage? \t";
    cin >> inputC;
    cout << endl;
    Charger cha2(inputA, inputB, inputC);

    cout << "Enter details of the second charger\n";
    cout <<"what type of charger are we looking for ? \t";
    cin >> inputA;
    cout << "How powerful is it ? \t";
    cin >> inputB;
    cout <<"What is the Voltage? \t";
    cin >> inputC;
    cout << endl;
    Charger cha3(inputA, inputB, inputC);

    // Test of our class below!
    cout << "The three chargers are:\n";
    cha1.printInfo();
    cha1.Level_evaluate();

    cha2.printInfo();
    cha2.Level_evaluate();

    cha3.printInfo();
    cha3.Level_evaluate();

    cout << cha1.getVoltage() << endl;
    cout << cha1.getPower() << endl;
    cout << endl << endl;

    cout << cha2.getVoltage() << endl;
    cout << cha2.getPower() << endl;
    cout << endl << endl;

    cout << cha3.getVoltage()<< endl;
    cout << cha3.getPower() << endl;
    cout << endl << endl;

    cout << "Are the chargers exchangeable?\n";
    if(cha2.equals(cha3)){ // 2 objects entered by user
        cout <<"Yes\n";
    }
    else
        cout << "No\n";

    cha1.setVoltage(7000);
    cha1.setPower(76);
    cha1.setType("Supercharger");

    cha3.setPower(7);
    cha3.setVoltage(6);
    cha3.setType("Supercharger");

    cout << "Details after modify:\n";
    cha1.printInfo();
    cha2.printInfo();
    cout << "******* END HERE *******" << endl;





}

