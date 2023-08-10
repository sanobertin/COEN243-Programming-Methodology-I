#include <iostream>
#include <fstream>
using namespace std;

int main(){/*
    string filepath = "/Users/bertin/CLionProjects/COEN243/output.txt";
    fstream output {filepath, ios_base::out && ios_base::app};
    if(!(output)){
        cerr << "Unable to create or read file: "<<filepath<<endl;
        exit(1); // end abruptly the program here
    }
    else{ // execute code below if file was opened
        output << "Bertin|Ndabarasa|Sano" <<endl;
    }

    output.close();
    */
    cout << filesystem::current_path() ;
}