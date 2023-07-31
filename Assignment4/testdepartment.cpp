/*Test your class by prompting the user to enter information about one of the university department and
 *five employees. Create the department object and five objects of the class Employee. Assign the
 *employees to the department. Test the member functions of the class.
 */

#include <iostream>
#include "Department.h"
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
    cin >> I>>J>>K;
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
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee1(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for second employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee2(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for third employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee3(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for fourth employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee4(A, B, C, D, E, F, G, H);

    cout << "\nEnter Info for fifth employee:\n";
    cin >> A >> B >> C >>D >> E >> F >> G >> H.areaCode >> H.phoneNumber;
    Employee employee5(A, B, C, D, E, F, G, H);

    // Adding five employees below
    dept1.addNewEmployee(employee1);
    dept1.addNewEmployee(employee2);
    dept1.addNewEmployee(employee3);
    dept1.addNewEmployee(employee4);
    dept1.addNewEmployee(employee5);


}