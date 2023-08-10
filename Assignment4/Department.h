/*
* Assignemnt 4
* group of 2
* Bertin Mihigo Sano. ID 40157663
* Kruti Patel. ID
*/


//#ifndef COEN243_DEPARTMENT_H
//#define COEN243_DEPARTMENT_H
#pragma once
#include <string>
#include "Employee.h"
#include <vector>
const int max_employees=25;

class Department {
private:
    std::string identification;
    std::string name;
    std::string history;
    std::vector <Employee> employees; // // You can assume that a department cannot have more than 25 employees.
public:
    Department(std::string ID, std::string NAME, std::string HISTORY);
    std::string getDeptID();
    std::string getDeptName();
    void changeDeptName(std::string);
    std::string getDeptHistory();
    void changeDeptHistory(std::string);
    void addNewEmployee(Employee);
    void removeEmployee(Employee);
    // Search if an employee with a certain employee id works in the department
    bool searchEmployee(Employee);
    // Output list of employees
    void printAllEmployees(void);
    // Output the number of employees
    void printNumberOfEmployees(void);
    //Search if an employee with a certain employee id works in the department
    // Output list of employees
    // Output the number of employees



};


//#endif//COEN243_DEPARTMENT_H
