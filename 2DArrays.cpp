#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout <<" 2D Array\n";
    cout << "how many columns:";
    int col{};
    cin >> col;
    cout << "how many rows:";
    int row{};
    cin >> row;
    int arr[row][col];
    int&&A = 3;
    cout << A << endl;
    for(size_t i=0;i<row;i++){
        for(size_t t{0};t<col;t++){
            arr[i][t] =  rand() % 17;
            cout << arr[i][t] << '\t';
        }
        cout << endl;
    }

}