//
// Created by Bertin Mihigo Sano on 2023-07-15.
//


// I will attempt to create a fx that returns a factorial of a number;

#include <iostream>
using namespace std;

long int factorial(int number);

int main()
{
    int in;
    cout << "Enter any number to calculate it's factorial(ONLY integers)" << endl;
    cin >> in;
    cout << factorial(in) << endl;
}

long int factorial(int number){
    if(number==0 || number==1)
        return (1);
    else if(number <=0) {
        cout << number << " cannot be less than 0" << endl;
        exit(EXIT_SUCCESS); // end the program here
    }
    else {
        // Calculate factorial here
        return factorial(number);

    }
    // function ends here
}