/*
 * Assignemnt 4
 * group of 2
 * Bertin Mihigo Sano. ID 40157663
 * Kruti Patel. ID
 */

#include "Department.h"
#include <iostream>

Department::Department(std::string ID, std::string NAME, std::string HISTORY) {
    identification = ID;
    name = NAME;
    history = HISTORY;
}

std::string Department::getDeptID(){
        return identification;
}

std::string Department::getDeptName(){
        return name;
}

void Department::changeDeptName(std::string newName){
        name = newName;
}
std::string Department::getDeptHistory(){
        return history;
}

void Department::changeDeptHistory(std::string newHistory){
        history = newHistory;
}

void Department::addNewEmployee(Employee newEmployee){
        employees.push_back(newEmployee);
        std::cout << newEmployee.getFullName() <<" is added to the list of employees\n";
}

void Department::removeEmployee(Employee employeeToBeRemoved){
        //Employee temp;
        for(int i=0;i<employees.size();i++){
            if(employees[i].getEmployeeID() == employeeToBeRemoved.getEmployeeID()){
                employees.erase(employees.begin()+i); // this will delete specified employee and reindex the vector
                break;
            }
            else
                continue;
        }
        return;
}


bool Department::searchEmployee(Employee emp){
        int id = emp.getEmployeeID();
        for(int i=0;i<employees.size();i++){
            if(employees[i].getEmployeeID() == id){
                return true;
            }
            else
                return false;
        }
}

void Department::printAllEmployees(void){
        for(int i=0;i<employees.size();i++){
            std::cout << employees[i].getFullName() << std::endl;
        }
}

void Department::printNumberOfEmployees() {
        std::cout <<"Total employees "<< employees.size() << std::endl;
}

