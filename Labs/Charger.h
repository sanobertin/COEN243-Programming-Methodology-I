// Lab 5 challenge
// Created by Bertin Mihigo Sano on 2023-08-02.
// Student ID 40157663

#pragma once
#include <iostream>
#include <string>

class Charger {
private:
    std::string type; // J1772, CHAdeMO, Supercharger;
    float Power;
    float Voltage;
public:
    Charger();
    Charger(std::string, float, float );
    std::string getType();
    int getPower();
    int getVoltage();
    void setType(std::string);
    void setPower(float );
    void setVoltage(float );
    bool equals(Charger);
    void Level_evaluate();
    void printInfo();


};

