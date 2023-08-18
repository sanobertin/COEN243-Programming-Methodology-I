#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int age;
    double salary;
    string name;
    cout << "Enter your name:";
    getline(cin, name, '\n');
    cout <<"Enter your age:";
    cin>>age;
    cout <<"Enter your salary:";
    cin >> salary;
    string filepath = "/Users/bertin/CLionProjects/COEN243/output.txt";
    fstream output {filepath, ios_base::out | ios_base::trunc };
    if(!(output)){
        cerr << "Unable to create or read file: "<<filepath<<endl;
        exit(1); // end abruptly the program here
    }
    else{ // execute code below if file was opened
        for (int i = 0; i < 4; ++i) {
            output << name <<"|"<<salary<<"|"<<age<<endl;
        }
    }
    output.close();

}