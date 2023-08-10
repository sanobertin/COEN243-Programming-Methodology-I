//
// Created by Bertin Mihigo Sano on 2023-08-04.
//

#include "Employee.h"
#include <iostream>
#include <fstream>
#include <sstream>

Student::Student(){
    // do nothing
} // empty constructor
Student::Student(std::string firstname, std::string lastname,
                 int ID, std::string DOB, float GPA, int startyear, float completedcredits, char program){
        this->_fName = firstname;
        this->_lName = lastname;
        this->_studentID = ID;
        this->_DOB= DOB;
        this->_GPA = GPA;
        this->_startyear=startyear;
        this->_completedCredits=completedcredits;
        this->_program=program;

}
//All getters
std::string Student::_getFirstName(){
        return this->_fName;
}
std::string Student::_getLastName(){
        return this->_lName;
}
int Student::_getStudentID(){
        return this->_studentID;
}
std::string Student::_getDOB(){
        return this->_DOB;
}
float Student::_getGPA(){
        return this->_GPA;
}
int Student::_getStartYear(){
        return this->_startyear;
}
float Student::_getCompletedCredits(){
        return this->_completedCredits;
}
char Student::_getProgram(){
        return this->_program;
}
// All setters
void Student::_setFirstName(std::string newFirstName){
    this->_fName =
}
void Student::_setLastName(std::string newLastName){
    this->_lName
}
void Student::_setStudentID(int newID){
    this->_studentID
}
void Student::_setGPA(float newGPA){
    this->_GPA
}
// void Student::_setStartYear(int); not logical to change start year
void Student::_setCompletedCredits(float newCredits){
    this->_completedCredits
}
void Student::_setProgram(char newProgram){
    this->_program
}
// custom methods
bool Student::CompleteProgram(){
// This function returns true if the student has finished all the courses by comparing the completed credits with the required credit for the program that the student is enrolled in.
    if(this->_completedCredits >=140 && this->_program =='B')
        return true;
    else if(this->_completedCredits >=16 && this->_program =='M')
        return true;
    else if(this->_completedCredits >=12 && this->_program =='P')
        return true;
    else{
        // students has not completed yet!
        return false;
    }
}
std::string Student::StudentStatus(){
    if(this->_GPA >=3.5)
        return "A+";
    else if(this->_GPA >=3 && this->_GPA <3.5 )
        return "A";
    else if(this->_GPA >=2.5 && this->_GPA <3)
        return "B";
    else if(this->_GPA >=2 && this->_GPA <2.5)
        return "C";
    else if(this->_GPA <2)
        return "D";
    else{
        // this condition will NOT be reached
        return "DNE";
    }

}
void Student::PrintStudentInfo(){
    //std::cout << _fName <<" "<<_lName<<" is a student in the "<<_program
}
Student::~Student(){

}

Staff::Staff() {
    // Do nothing
}

Staff::Staff(std::string FName, std::string LName, int empID, int hiringDate, char bonusCode, double salary){
    this->__firstName = FName;
    this->__lastName = LName;
    this->__ID = empID;
    this->__hireDate = hiringDate;
    this->__bonusCode = bonusCode;
    this->__currentSalary = salary;
}

std::string Staff::__getFirstName(){
        return __firstName;
}
std::string Staff::__getLastName(){
        return __lastName;
}

int Staff::__getID() {
        return __ID;
}

int Staff::__getHireDate(){
        return __hireDate;
}
char Staff::__getBonusCode(){
        return __bonusCode;
}
double Staff::__getCurrentSalary(){
        return __currentSalary;
}


void Staff::__setFirstName(std::string firstName){
        this->__firstName = firstName;
}
void Staff::__setLastname(std::string lastName){
        this->__lastName = lastName;
}
void Staff::__setID(int newID){
        this->__ID  = newID;
}
void Staff::__setHireDate(int Hiredate){
        this->__hireDate = Hiredate;
}
void Staff::__setBonusCode(char newBonusCode){
        this->__bonusCode = newBonusCode;
}
void Staff::__setCurrentSalary(double newSalary){
        this->__currentSalary = newSalary;
}

void Staff::__Print_Staff_Info(){ // This function prints out all the information of one staff (all the attributes).
        std::cout << __firstName <<" "<<__lastName<<" is identified by their employee ID: " << __ID<<" and he/she was hired on "<<__hireDate<<"."<< std::endl;
        std::cout<< __firstName<<" \'s current salary is " << __currentSalary<<" and his/her salary bonus code is"<< __bonusCode << "." << std::endl;
}
//double Staff::__Calculate_Salary();   // see function specs in the PDF

Staff::~Staff()  {
        // destructor will delete pointer to object and save object data to disk
}





Student_Staff::Student_Staff(){
        //Do nothing
}

Student_Staff::Student_Staff(std::string filename) { // full path of filename required!
    if((filename.find("staff.txt")) <= filename.size()){
        // read staff.txt
        std::string line; // get a line
        std::string subline; // extract within that line given delimiter |
        std::fstream file {filename, std::ios_base::in};
        if(file.is_open()) { // execute this section if read file was successful
            while (!file.eof()) {
                getline(file, line, '\n');// get a line and store into file.
                std::stringstream iss{line}; // string stream to capture a line
                int count{0}; // count columns of my data start from 0 to 5
                while (getline(iss, subline, '|')) {
                    if (count == 0)
                        staffstructure.firstname = subline;
                    else if (count == 1)
                        staffstructure.lastname = subline;
                    else if (count == 2)
                        staffstructure.id = stoi(subline);
                    else if (count == 3)
                        staffstructure.hiredate = stoi(subline); // convert string to integer
                    else if (count == 4)
                        staffstructure.bonuscode = subline[0]; //
                    else if (count == 5)
                        staffstructure.salary = stod(subline); // convert string to double
                    else
                        break; // this condition will never reach here unless file is unstructured

                    count++; // jump to next column
                }
                Staff *new_staff = new Staff(staffstructure.firstname, staffstructure.lastname,
                                             staffstructure.id, staffstructure.hiredate, staffstructure.bonuscode, staffstructure.salary);
                staffs.push_back(*new_staff); // add new object to the staffs dynamic array
                std::clog <<"We now have "<<staffs.size()<<" staff employees"<< std::endl;

            } // finish reading all lines here
        }
        else{
            std::cerr << "Error! Cannot read from file likely due to the formatting issue\n";
            exit(EXIT_FAILURE);
        }
        file.close();

    } // reading from staff.txt ends here
    else if((filename.find("student.txt")) <= filename.size()){
        //read student.txt
        std::string line; // get a line
        std::string subline; // extract within that line given delimiter |
        std::fstream file {filename, std::ios_base::in};
        if(file.is_open()) { // execute this section if read file was successful
            while (!file.eof()) {
                getline(file, line, '\n');// get a line and store into file.
                std::stringstream iss{line}; // string stream to capture a line
                int count{0}; // count columns of my data start from 0 to 5
                while (getline(iss, subline, '|')) {
                    if (count == 0)
                        studentstructure.firstname = subline;
                    else if (count == 1)
                        studentstructure.lastname = subline;
                    else if (count == 2)
                        studentstructure.studentID = stoi(subline); // convert string to integer
                    else if (count == 3)
                        studentstructure.DOB = subline;
                    else if (count == 4)
                        studentstructure.GPA = stof(subline); //
                    else if (count == 5)
                        studentstructure.startyear = stoi(subline); // convert string to int
                    else if(count ==6 )
                        studentstructure.completedCredits = stof(subline);
                    else if(count==7)
                        studentstructure.program = subline[0];
                    else
                        break; // this condition will never reach here unless file is unstructured

                    count++; // jump to next column
                }
                Student *new_student = new Student;
                students.push_back(*new_student); // add new object to the students dynamic array
                std::clog <<"We now have "<<students.size()<<" students"<< std::endl;

            } // finish reading all lines here
        }
        else{
            std::cerr << "Error! Cannot read from file likely due to the formatting issue\n";
            exit(EXIT_FAILURE);
        }
        file.close();
    }
    else {
        std::cerr << filename <<" is an invalid file or directory" << std::endl;
        exit(1);
    }


}

