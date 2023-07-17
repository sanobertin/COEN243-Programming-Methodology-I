//
// Created by Bertin Mihigo Sano on 2023-07-15.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector <int> random_numbers(100);
    for(int i=0; i<100; i++){ // A loop to initialize my random numbers vector
        random_numbers.at(i) =  (int) random();
        cout << random_numbers[i] << endl;
    }
    for(int i=0; i<100; i++){ // A loop to print sorted numbers
        random_numbers.at(i) = rand();

        cout << random_numbers[i] << endl;
    }
    return 0;
}