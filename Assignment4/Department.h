//
// Created by Bertin Mihigo Sano on 2023-07-28.
//

//#ifndef COEN243_DEPARTMENT_H
//#define COEN243_DEPARTMENT_H
#pragma once
#include <string>
#include "Employee.h"
const int max_employees=25;

class Department {
private:
    std::string identification;
    std::string name;
    std::string history;
    Employee employees[max_employees]; // You can assume that a department cannot have more than 25 employees.
public:
    Department();
    std::string getDeptID();
    std::string getDeptName();
    void changeDeptName();
    std::string getDeptHistory();
    void changeDeptHistory();



};


//#endif//COEN243_DEPARTMENT_H
