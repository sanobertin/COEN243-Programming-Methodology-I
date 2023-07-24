//
// Created by Bertin Mihigo Sano on 2023-07-19.
//
// Concordia ID 40157663
// Created by Bertin Mihigo Sano and Kruti
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
#include <random>
using namespace std;
/*
 * Kruti's work
float highest_grades(float arr[]);
float lowest_grades(float arr[]);
float avg_grade(float *arr);
 */
float median_grade(float arr[]);
int A_grades(int N, float arr[N]);
int B_grades(int N, float arr[N]);
int C_grades(int N, float arr[N]);
int D_grades(int N, float arr[N]);
int F_grades(int N, float arr[N]);

int main() {
    int N;
    cout << "How many students are enrolled in your class ?" << endl;
    cin >> N;
    float grades[N];
    // section below is for testing purposes and will be removed
    int range = 100 - 0 + 1;
    for (int i = 0; i < N; i++) {
        grades[i] = rand() % range + 0;
        cout << "Student " << (i + 1) << "'s grade is " << grades[i] << endl;
    }

    cout << A_grades(N, grades);
    cout << endl;

    cout << B_grades(N, grades);
    cout << endl;

    cout<< C_grades(N, grades);
    cout << endl;

    cout << D_grades(N, grades);
    cout << endl;

    cout << F_grades(N, grades);
    cout << endl;

    //end testing

    return 0; // Exit with success
}

// functions detials are found below

int A_grades(int N, float arr[N]){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(arr[i]>=90)
                counter++;
            else
                continue;
        }
    }
    else{
         cout << "Issue with number of students\n";
         exit(EXIT_FAILURE);
    }
    return counter;
}


int B_grades(int N, float arr[N]){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(arr[i]>=80 && arr[i]<90)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

int C_grades(int N, float arr[N]){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(arr[i]>=65 && arr[i]<80)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

int D_grades(int N, float arr[N]){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(arr[i]>=50 && arr[i]<65)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

int F_grades(int N, float arr[N]){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(arr[i]<50)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}