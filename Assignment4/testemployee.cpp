/*
* Assignemnt 4
* group of 2
* Bertin Mihigo Sano. ID 40157663
* Kruti Patel. ID
*/

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
    cout <<"Employee number <integer>\n"
            "First Name <string>\n"
            "Last Name <string>\n"
            "Date of Birth in format YYYY/MM/DD <string>\n"
            "Employee\'s address <string>\n"
            "Employee\'s start year <integer>\n"
            "His/Her Salary? <double> \n"
            "Telephone number area code <integer>\n"
            "Phone Number <string>\n";
    cout << "Enter Info for first employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee1(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for second employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee2(A, B, C, D, E, F, G, H);

    // Below lines of codes will test member functions.
    //employee 1
    cout << employee1.getFullName()<<" was born on "<<employee1.getDOB()<<" and is identified by "+employee1.getEmployeeID() <<". He/She was hired on "+employee1.getHiredYear() << endl;
    cout << employee1.getFname()<<" currently earns " << employee1.getSalary() <<" and he/she lives on "<<employee1.getAddress() <<" and can be reached out to "<< employee1.getTelephone().areaCode << employee1.getTelephone().phoneNumber << endl;
    //employee 2
    cout << employee2.getFullName()<<" was born on "<<employee2.getDOB()<<" and is identified by "+employee2.getEmployeeID() <<". He/She was hired on "+employee2.getHiredYear() << endl;
    cout << employee2.getFname()<<" currently earns " << employee2.getSalary() <<" and he/she lives on "<<employee2.getAddress() <<" and can be reached out to "<< employee2.getTelephone().areaCode << employee2.getTelephone().phoneNumber << endl;

    //below print true/false 1/0 if employee1 has same last name as the other employee
    // determine if two employees entered have same last name!
    if(!(employee1.isSameLname(employee2)))
        cout <<employee1.getFullName()+" and "+employee2.getFullName()+" do not have same last name" << endl;
    else
        cout <<employee1.getFullName()+" and "+employee2.getFullName()+"have the SAME name!" << endl;

    //below print true/false 1/0 if employee1 has same last name as the other employee
    if(!(employee1.isSameSalaryORSameYear(employee2)))
        cout <<employee1.getFullName()+" and "+employee2.getFullName()+" were neither hired same year nor they have same salary!" << endl;
    else
        cout <<employee1.getFullName()+" and "+employee2.getFullName()+"were hired same year or they have equal salary" << endl;

    // Section below will involve the use of setters of the Employee class
    cout <<"*****************************************************" << endl;
    cout << "I will modify a few info for both employee\'s" << endl;
    cout <<"Enter "<<employee1.getFullName()<<" \'s new address" << endl;
    employee1.changeAddress();
    employee1.changeSalary();
    employee2.changeTelephone();
    employee2.changeLname()



    return 0;
}