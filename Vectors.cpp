//
// Created by Bertin Mihigo Sano on 2023-07-13.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <float> test;
    test.push_back(45);
    test.push_back(12.3);
    test.push_back(0.14);
    cout << test.capacity()<< endl;
    for(int i=0;i<test.size();i++)
        cout << test.at(i) << endl;

    cout << sizeof(test) <<" bytes" << endl;
    return 0;
}