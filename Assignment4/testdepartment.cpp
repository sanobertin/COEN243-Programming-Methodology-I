/*
* Assignemnt 4
* group of 2
* Bertin Mihigo Sano. ID 40157663
* Kruti Patel. ID
*/


#include <iostream>
#include "Department.h"
#include <limits>
#define MAX numeric_limits<streamsize>::max()
using namespace std;
int main(){
    int A; // int EmployeeNumber
    string B; // string FirstName
    string C; // string LastName
    string D; // string DateofBirth
    string E; // string ADDRESS
    int F; // int startYear
    double G; //double compensation
    telephone H; // telephone t
    cout <<endl<<"\t*** WELCOME TO THE DEPARTMENTAL // EMPLOYEE DATABASE***\t" <<endl;
    // Department
    string I; // dept identification
    string J; //dept name
    string K; // dept history
    cout << endl <<"Enter the information for the department" << endl;
    cout <<"Please enter in the following order:\nIdentification <string>\nName<string>\nHistory<string>\n";
    //cin >> I>>J>>K;
    while(!(cin >> I>>J>>K)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
    Department dept1(I,J,K);
    // End department initialize
    // five employees below
    cout << "Below, enter information for five employees\n";
    cout << "I will need the information below in the exact order: \n";
    cout <<"Employee number <integer>\n"
            "First Name <string>\n"
            "Last Name <string>\n"
            "Date of Birth in format YYYY/MM/DD <string>\n"
            "Employee\'s address <string>\n"
            "Employee\'s start year <integer>\n"
            "Employe's salary <numeric>\n"
            "Telephone number area code <integer>\n"
            "Phone Number <string>\n";

    cout << "Enter Info for first employee:\n";
    //cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    while(!(cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }


    Employee employee1(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for second employee:\n";
    while(!(cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
    Employee employee2(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for third employee:\n";
    while(!(cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
    Employee employee3(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for fourth employee:\n";
    while(!(cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
    Employee employee4(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for fifth employee:\n";
    while(!(cin >> A >> B >> C >> D >> E >> F >> G >> H.areaCode >> H.phoneNumber)){
        cerr << "Please enter valid inputs!\n";
        cin.clear();
        cin.ignore(MAX, '\n');
    }
    Employee employee5(A, B, C, D, E, F, G, H);

    // Adding five employees below
    dept1.addNewEmployee(employee1);
    dept1.addNewEmployee(employee2);
    dept1.addNewEmployee(employee3);
    dept1.addNewEmployee(employee4);
    dept1.addNewEmployee(employee5);
    //TEST MEMBER FUNCTIONS
    cout << dept1.getDeptName() <<" identified by "<<dept1.getDeptID()<<" is marked by it\'s history: "<<dept1.getDeptHistory() << endl;
    cout << " The list below lists all employees of " << dept1.getDeptName() << endl;
    dept1.printAllEmployees();
    dept1.printNumberOfEmployees();


    // TEST Modifiers member functions
    dept1.removeEmployee(employee1);
    dept1.printNumberOfEmployees();
    dept1.printAllEmployees();
    cout <<"Enter " << dept1.getDeptName()<<" \'s new history" << endl;
    string AA;
    cin >> AA;
    dept1.changeDeptHistory(AA);
    cout << "Enter a new name for "<<dept1.getDeptName() << endl;
    cin >>AA;
    dept1.changeDeptName(AA);
    // search an employee
    if(dept1.searchEmployee(employee3))
        cout << "Employee found!";
    else
        cout << "Sorry I can\'t find this employee!\n";

    dept1.printAllEmployees();

}