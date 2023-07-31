//
// Created by Bertin Mihigo Sano on 2023-07-26.
//

#pragma once
#ifndef COEN243_EMPLOYEE_H
#define COEN243_EMPLOYEE_H

#include <string>
// employees of a department at a university


struct telephone{
    int areaCode; //XXX
    std::string phoneNumber; //XXX-XXXX
};


class Employee{
private:
    const int EmployeeID;
    std::string Fname;
    std::string Lname;
    std::string DOB;
    std::string address; // date of birth. format YYYY/MM/DD
    const int yearHired;
    double salary;
    telephone Tel; // an object to hold employee's telephone number
public:
    Employee(int EmployeeNumber, std::string FirstName, std::string LastName, std::string DateofBirth,
             std::string ADDRESS, int startYear, double compensation, telephone t);

    int getEmployeeID(void); //Return the employee id number.
    std::string getFname(void); // Return the first name of the employee
    void changeFname(std::string); //Modify the first name of the employee
    std::string getLname(void); // Return the last name of the employee
    void changeLname(std::string); //Modify the last name of the employee
    int getHiredYear(void); // Return the hired year of the employee
    std::string getFullName(); // Return the full name, i.e., first name and last name
    std::string getDOB();//Return the date of birth
    void changeDOB(std::string);//Modify the date of birth
    double getSalary(void);//Return the salary of the employee
    void changeSalary(double); //Modify the salary of the employee
    std::string getAddress(void); //Return the address of the employee
    void changeAddress(std::string); // Modify the address of the employee
    telephone getTelephone(void); //Return the telephone number
    void changeTelephone(telephone);//Modify the telephone number
    bool isSameLname(Employee otherEmployee); //Return true if two given employees have the same last name. Return false otherwise
    bool isSameSalaryORSameYear(Employee otherEmployee);//Return true if two employees have the same salary or they were hired on the same year. Return false otherwise



};

#endif