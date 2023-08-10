/*
* Assignemnt 4
* group of 2
* Bertin Mihigo Sano. ID 40157663
* Kruti Patel. ID
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of two dimensional integer array:" << endl;

    for (int i = 0; i < n; i++) { // read numbers from user
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) { // print array in tabular format
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }


    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1];
    }


    if (n % 2 == 1) {
        int middle = n / 2;
        sum -= matrix[middle][middle];
    }


    cout << "The sum of the elements on the diagonals is: " << sum << endl;

    return 0;
}