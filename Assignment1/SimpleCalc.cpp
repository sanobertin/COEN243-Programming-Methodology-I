/* Write a program that asks the user to enter two integers and
 * prints the difference, product, division, average and the summation of square of these two numbers.
 * Here is an example of the execution of the program: */

// Author 40157663 Concordia student ID

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;

    cout << "************************************" << endl << endl ;
    cout << "Enter is first number" << endl;
    cin >> a;
    cout << "Enter is second number" << endl;
    cin >> b;
    double a_double = (double) a;
    double b_double = (double) b;
    int diff, product, sum_of_square;
    double average, div;
    diff = a-b;
    product = a*b;
    div = a_double/b_double;
    average = (a_double+b_double)/2;
    sum_of_square = pow(a, 2) + pow(b, 2);
    // ref: https://www.programiz.com/cpp-programming/library-function/cmath/pow#:~:text=The%20pow()%20function%20returns,%2C%20b)%20%3D%20ab%20.


    cout << "************************************" << endl << endl ;
    cout << "The results are:" << endl <<endl;
    cout << "Difference " <<diff<< endl ;
    cout << "Product " <<product<< endl;
    cout <<"Division " <<div<< endl;
    cout <<"Average " <<average<< endl;
    cout <<"Sum of square " <<sum_of_square<< endl;
    cout << "************************************" << endl << endl ;


    return 0;
}