
#include<iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <string>
#define MAX numeric_limits<streamsize>::max() // this macro will be used to define max number of streamsize
using namespace std;
struct mydatastruct {
    string name;
    int id;
    string tel;
}READ;

int main(){
    string line;
    string subline;
    string filepath = "/Users/bertin/CLionProjects/COEN243/DB.txt";
    fstream file {filepath, ios_base::in};
    if(file.is_open()){
        getline(file, line, '\n'); // get a line and store into file.
        stringstream iss {line};
        int count {0};
        while(getline(iss,subline, '|')){
            //cout << count << '\t';
            //cout << subline << endl;
            if(count==0)
                READ.name = subline;
            else if(count==1)
                READ.id = stoi(subline); // convert string to integer
            else if(count==2)
                READ.tel = subline;
            else
                break;

            count++;
        }
        cout << READ.name << endl<< READ.id << endl<< READ.tel<< endl;
    }
    else{
        cerr << "Error! Cannot read from file likely due to the formatting issue\n";
        exit(EXIT_FAILURE);
    }
    file.close();

}

//employee first name|employee last name|employee id|data of hiring|bonusCode|current salary
// string | string | int | int | char | double

struct mydatatruct {
    string firstname;
    string lastname;
    int id;
    int hiredate;
    char bonuscode;
    double salary;
    string tel;
}MYDATASTRUCTURE;

