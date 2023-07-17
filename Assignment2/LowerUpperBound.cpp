// Concordia ID: 40157663
// Created by Bertin Mihigo Sano on 2023-07-12.
//

#include <iostream>
#include <iomanip>

using namespace std;
void fx1(unsigned int lower, unsigned int upper){
    for(unsigned int i=lower;i<=upper;i++) // A loop to print all numbers btn lower and upper divisible by both 3 nad 7
    {
        if(i%3==0 && i%7==0)
            cout << i << endl;
        else
            continue;
    }
}

void fx2(unsigned int lower, unsigned int upper, int& result){ // by reference
    result= upper - lower;
    cout << result << endl;

}

double fx3(unsigned int lower, unsigned int upper){
    double sum;
    for(int i= (int) lower;i<=upper;i++){ // converted lower from unsigned to int
        sum = sum + (1.0/i);
    }
    return sum;
}

// unsigned int was used to ensure my program can work with input digits above 0

int main(){
    unsigned int lower, upper;
    cout << "Please enter 2 positive integers" << endl;
    cout << "Lower bound: ";
    cin >> lower;
    cout << endl << "Upper bound: ";
    cin >> upper;
    char ch;
    cout << endl << "Please, enter a single character in the alphabet" << endl;
    cin >> ch;
    switch(tolower(ch)){ // tolower()
        case 'a':
            fx1(lower, upper);
            break;
        case 'b':
            int result;
            fx2(lower, upper, result); // referencing the address of result NOT the actual value
            break;
        case 'c':{
            double outcome = fx3(lower, upper);
            cout << setprecision(3) << outcome << endl; // see iomanip header
            break;
            }
        default:
            cout << "Invalid input" << endl;
            break;

    }
    return 0;
}