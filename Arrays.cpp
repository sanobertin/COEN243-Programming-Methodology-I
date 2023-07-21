//
// Created by Bertin Mihigo Sano on 2023-07-18.
//


// I will attempt to reverse an array of 10 elements

#include <iostream>
using namespace std;


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = (sizeof arr)/(sizeof(int));
    for(int i=0;i<arr_size;i++) // print before reverse
        cout << arr[i] << endl;

    int reversed_arr[arr_size];
    int reversed_arr_length = (sizeof(reversed_arr))/(sizeof(int)) +1;
    for(int i=0;i<(reversed_arr_length);i++) // a loop to reverse an array
        reversed_arr[i]= arr[(arr_size)-i];
    for(int i=0;i<reversed_arr_length;i++) // print after reverse
        cout << reversed_arr[i] << endl;

    return 0; // Success end program


}


/*
 *
    int num = 10;
    int& ref = num;
    cout << num << endl;
    cout << &ref << endl;
    cout << ref << endl;
 */