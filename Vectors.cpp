//
// Created by Bertin Mihigo Sano on 2023-07-13.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <float> test {12.4, 12.4};
    cout << typeid(test).name()<< endl;
    cout << test[1] << endl;
    test.at(1) = 45.66666;
    cout << test[1] << endl;
    return 0;
}