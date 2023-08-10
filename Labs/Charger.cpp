// Lab 5 challenge
// Created by Bertin Mihigo Sano on 2023-08-02.
// Student ID 40157663
#include "Charger.h"

Charger::Charger() {
    this->Power = 0;
    this->Voltage= 0 ;
    this->type= "";
} // empty constructor
Charger::Charger(std::string type, float Power, float Voltage) {
    this->type = type;
    this->Power = Power;
    this->Voltage = Voltage;
} // constr with params

int Charger::getPower() {
    return (this->Power);
}

int Charger::getVoltage() {
    return (this->Voltage);
}

std::string Charger::getType() {
    return (this->getType());
}

void Charger::setPower(float Power) {
    this->Power = Power;
}

void Charger::setType(std::string type) {
    this->type = type;
}

void Charger::setVoltage(float Voltage) {
    this->Voltage = Voltage;
}

void Charger::printInfo() {
    std::cout << this->type << " charger with "<<this->Power<<" kW charging power using the voltage of "<< this->Voltage<<" volt.\n";
    return; // end function here
}

bool Charger::equals(Charger otherCharger) {
    //evaluate of 2 chargers are interexchangable
    if(this->type == otherCharger.type && this->Voltage == otherCharger.Voltage)
        return true;
    else
        return false;
    // end function here
}

void Charger::Level_evaluate() {
    if(this->Power<=3.7)
        std::cout << " Level 1 Charger \n";
    else if(this->Power>3.7 && this->Power <=22)
        std::cout <<" Level 2 Charger \n";
    else if(this->Power >= 22)
        std::cout << " Level 3 Charger \n";
    else
        exit(EXIT_SUCCESS); // abruptly end program here
}
