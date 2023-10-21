// Created by Bertin Mihigo Sano on 2023-08-29.
//
#include <iostream>
using namespace std;

enum state {Fail=0, Pass=1};

int main(){
    cout << typeid(state).name() << endl << typeid(state).hash_code() << endl;
}