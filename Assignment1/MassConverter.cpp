/*
 * Write a program that converts 5 given values in kilograms to grams and vice versa.
 * It asks the user to enter 5 integer values and one character as the unit for each value (‘G’ (grams) or ‘K’(kilograms)).
 * If the user enters ‘G’ as the unit, the program shows the corresponding value in kilograms and vice versa.
 */

// Author 40157663 Concordia student ID

#include <iostream>

using namespace std;
// Note that the program below uses arrays, a concept that's not covered in the course yet.
// Arrays will assist me to input multiple values within a loop
int main()
{
    cout << "Hello! \n I will assist to convert your mass from kilograms(kg) to grams(g) and vice versa\n\n";
    cout << "Below, enter 5 times the weight then press enter then input your current unit. Only specify units as  \'K\' or \'G\'" << endl;
    int i;
    double arr[4];
    string unit;
    for(i=0; i<=4;i++)  // Values input loop
    {
        cout << "Enter the "<<i+1<<" weight" << endl;
        cin >> arr[i] >> unit[i];
    }


    cout << "\nBelow are the conversions. \n";
    cout << "\nValues \tUnit\t\tEquivalence\n";
    for(int h=0; h<=4; h++)
    {
        switch (unit[h]) {
            case 'K':
            {
                //convert to from K to G
                cout <<arr[h] <<"\t" <<"Kg" <<"\t\t" <<arr[h]*1000<<" Grams" <<endl;
                break;
            }
            case 'G':
            {
                //convert to from G to K
                cout <<arr[h] <<"\t" <<"Grams" <<"\t\t" <<arr[h]/1000<<" Kilograms" <<endl;
                break;
            }
            default:
            {
                cout << "INVALID UNIT FOR " << h+1 <<" weight" << endl;
                break;
            }


        }
    }

    return 0;
}