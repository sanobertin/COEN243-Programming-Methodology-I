//
// Created by Bertin Mihigo Sano on 2023-07-26.
//
#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout <<endl<<"\t*** WELCOME TO THE DEPARTMENTAL EMPLOYEE DATABASE***\t" <<endl;
    int A; // int EmployeeNumber
    string B; // string FirstName
    string C; // string LastName
    string D; // string DateofBirth
    string E; // string ADDRESS
    int F; // int startYear
    double G; //double compensation
    telephone H; // telephone t
    cout << "Let\'s create two employees at the moment.\n";
    cout << "I will need the information below in the exact order: \n";
    cout <<"Employee number\nFirst Name\nLast Name\nDate of Birth in format YYYY/MM/DD\nEmployee\'s address\nEmployee\'s start year\nTelephone number area code\nPhone Number\n";
    cout << "Enter Info for first employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee1(A, B, C, D, E, F, G, H);

    cout << "Enter Info for second employee:\n";
    //cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    //Employee emp2(A, B, C, D, E, F, G, H);

    return 0;
}