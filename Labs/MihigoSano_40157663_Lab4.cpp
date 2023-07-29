// Concordia id 40157663
// Created by Bertin Mihigo Sano on 2023-07-26.
// This program below expects a perfect user i.e. no error handling involved here
#include <iostream>

using namespace std;



void get_summation(int A[], int* B);

int main(){
    int arr[10];
    int aux[5];
    cout << "Please enter ten distinct integer number\n";
    for(size_t t=0;t<10;t++){
        cin >> arr[t];
    } // end of arr assignment
    //
    get_summation(arr, aux);
    cout << "Your array:\n";
    for(size_t t=0;t<10;t++){
        cout<< arr[t] << "\t";
    }
    cout << endl << endl << endl;
    cout << "The auxiliary array:\n";
    for(size_t t=0;t<5;t++){
        cout<< aux[t] << "\t";
    }
    cout << endl;

    return 0;
}

void get_summation(int A[], int* B){ // passing 2 arg as pointer
    for(size_t t=0;t<5;t++){
        for(size_t i=0;i<t+1;i++){
            *(B+t)= A[i]+ A[9-i];
        }
    }
}