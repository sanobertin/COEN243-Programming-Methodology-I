/* Write a program that takes an integer as input and returns whether it is a prime number or not. */
// Prime number == a number divisible by 1 and itself ONLY
// Below article was used to get used to know more about prime number
// https://www.splashlearn.com/math-vocabulary/algebra/prime-number(accessed on July 9 2023)


// Author 40157663 Concordia ID
#include <iostream>

using namespace std;

int main() {
    cout << "Let\'s determine whether your input number is a prime number or not" << endl;
    int num, i;
    cin >> num;
    if(num<=1)
        cout<<"Numbers below 1 are NOT prime numbers." << endl;
    else{
        for (i = 2; i < num; i++){ // a loop to detect if any number preceding the input value has a factor or not
            if(num%i ==0) {
                cout << num << " is not a prime number" << endl;
                break;
            }
            else if(i+1==num) { // condition to catch num being itself a factor. i+1 is due to i<num NOT i<=num
                cout << num << " is a prime number" << endl;
                break;
            }
            else{ // if 2 conditions above doesn't pass, the loop to keep going!
                continue;
            }
        // end the loop here
        }
    }

    return 0;
}