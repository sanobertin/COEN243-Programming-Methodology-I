//
// Created by Bertin Mihigo Sano on 2023-07-19.
//
// Concordia ID 40157663
// Created by Bertin Mihigo Sano on 2023-07-19.
// Lab3 exercise
/*
 * Write a C++ program that uses an array to store the grades of N students (N is entered by the user),
 * and outputs the information below.
 * Your program should be structured using functions.
 * Each functionality should be implemented in a separate function.
1- 4 highest grades
2- 4 lowest grades
3- Average grade
4- Median grade
5- Number of A grades (grades equal or more than 90)
6- Number of B grades (grades between 80 (inclusive) and 90)
7- Number of C grades (grades between 65 (inclusive) and 80)
8- Number of D grades (grades between 50 (inclusive) and 65)
9- Number of F grades (grades less than 50)
 */

#include <iostream>
using namespace std;

float highest_grades(float arr[]);
float lowest_grades(float arr[]);
float avg_grade(float *arr);
float median_grade(float arr[]);
float A_grades(float arr[]);
float B_grades(float arr[]);
float C_grades(float arr[]);
float D_grades(float arr[]);
float F_grades(float arr[]);

int main(){
    int N;
    cout << "How many students are enrolled in your class ?" << endl;
    cin >> N;
    float grades[N];
    // section below will randomly assign numbers to grades array to for test purposes
    float test_grades[5] = {23.3, 43.4, 98.55, 67.9, 50.01};
    float* grades_ptr=test_grades;
    cout << avg_grade(grades_ptr) << endl;


    return 0; // Exit with success
}

float avg_grade(float& arr){
    float sum=0.0;
    int arr_length = sizeof(arr) / sizeof(float);
    for(int i=0;i<arr_length;i++){
        sum = (arr + i);
    }
    return (sum);
}