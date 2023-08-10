//
// Created by Bertin Mihigo Sano on 2023-08-01.
//

#include <iostream>
#include <ios>
#include <limits>
#define MAX numeric_limits<streamsize>::max()

using namespace std;

int main(){
    int A;
    cout << MAX;
    while(!(cin >> A)){
        cout << "Hi\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
}