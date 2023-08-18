//
// Created by Bertin Mihigo Sano on 2023-08-15.
//
#include <map>
#include <array>
#include <iostream>
using namespace std;

int main(){
    map <char, string> DB;
    //DB= {{'A', "Montreal", {'B', "Toronto"}, {'C', "Vancouver"}, {'D', "Tokyo"}}};
    DB['A'] = "Montreal";
    DB['B'] = "Toronto";
    DB['c'] = "Ottawa";
    DB['C'] = "Vancouver";
    DB['D'] = "Tokyo";
    map<char, string>::iterator it;
    cout << typeid(it).name() << endl;
}