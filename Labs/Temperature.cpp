// ID 40157663
// Created by Bertin Mihigo Sano on 2023-08-09.
// Lab 6 Challenge

#include "Temperature.h"

Temperature::Temperature(){
    this->value = 0.00;
    this->type = 'C';
    this ->city = "";
}
Temperature::Temperature(double value, char type, std::string city){
    this->value = value;
    this->type = type;
    this ->city = city;
}
// all getters
double Temperature::getValue(){
    return this->value;
}
char Temperature::getType(){
        return this->type;
}
std::string Temperature::getCity(){
        return this->city;
}
// all setters
void Temperature::setValue(double newValue){
        this->value = newValue;
}
void Temperature::setType(char newType){
        this->type = newType;
}
void Temperature::setCity(std::string newCity){
        this->city = newCity;
}

double Temperature::Convert(){
        double temp = this->value;
        char CoF = this->type;
        if(CoF == 'C'){ // if temp is in celsius then return to fahre
            double result {};
            result = (temp*1.8) + 32;
            return result;
        }
        else if(CoF=='F'){ // if temp is in fahre then return to celsius
            double result {};
            result = (temp-32) / 1.8;
            return result;
        }
        else {
            std::cerr << "invalid parameter! \n";
        }
}

void Temperature::info() {
        if(this->type == 'C')
            std::cout <<"Temperature of "<<city<<" is F="<<this->Convert()<<" C="<< value << std::endl;
        else if(this->type == 'F')
            std::cout <<"Temperature of "<<this->city<<" is F="<<this->value<<" C="<<this->Convert() << std::endl;
        else{
            // null condition
        }
}

void Temperature::Compare( Temperature *obj){
        if(this->value > obj->value){
            this->info();
            std::cout << std::endl <<" is greater than ";
            obj->info();
        }
        else if(this->value < obj->value){
            this->info();
            std::cout << std::endl <<" is less than ";
            obj->info();
        }
        else if(this->value == obj->value){
            this->info();
            std::cout << std::endl <<" is equal to";
            obj->info();
        }
        else {
            // void condition;
            return;
        }

}

Temperature::~Temperature(){
        delete this;
}
