//
// Created by Bertin Mihigo Sano on 2023-07-17.
//
#include <iostream>
#include <random>
using namespace std;

int main(){
    /*
    long double* _memory_pointer = nullptr;
    _memory_pointer = new long double;
    *_memory_pointer = 3.144444444;
    cout << &_memory_pointer << endl;
    cout << sizeof _memory_pointer << endl;
    size_t t= 10;
    cout << t<<endl<< typeid(t).name()<< endl;
     */
    int range = 100 - 0 + 1;
    //int num = rand()%range;
    int arr[100];
    for(int i=0;i<100;i++)
        arr[i]=rand()%range;
    for(int i=0;i<100;i++)
        cout << arr[i]<< endl;
    cout << "******************" << endl;
    int *arr_ptr = nullptr;
    arr_ptr = arr;
    for(int i=0;i<100;i++)
        cout << (arr_ptr + i ) << endl;
    cout << "******************" << endl;
    for(int i=0;i<100;i++)
        cout << (*arr_ptr + i ) << endl;

    delete [] arr_ptr;
    return 0;

}