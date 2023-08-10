// ID 40157663
// Created by Bertin Mihigo Sano on 2023-08-09.
// Lab 6 Challenge

#pragma once
#include <string>
#include <iostream>
class Temperature {
private:
    double value;
    char type;
    std::string city;
public:
    Temperature();
    Temperature(double value, char type, std::string city);
    // all getters
    double getValue();
    char getType();
    std::string getCity();
    // all setters
    void setValue(double newValue);
    void setType(char newType);
    void setCity(std::string city);
    double Convert(); // temperature, celsuisORfahrenheit
    void info();
    void Compare(Temperature *obj);
    ~Temperature();

};


