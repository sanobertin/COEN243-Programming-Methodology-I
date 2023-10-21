#include <iostream>
#include <filesystem>
#include <iomanip>
using namespace std;
using namespace std::filesystem;


int main(){
    /*
    cout << "Disk capacity: "<< double((space("/").capacity)/1000000000.0)<<" GBs"<< endl;
    cout << "Available space: "<< double((space("/").available)/1000000000.0)<<" GBs"<< endl;
    string ls = filesystem::current_path();
    auto myPath = filesystem::path();
    myPath = "/Users/bertin/CLionProjects/COEN243";
    cout << myPath.root_directory() << endl;
    cout << myPath.root_name() << endl;
    cout << std::boolalpha;
    cout << myPath.has_parent_path() << endl;
    cout << myPath.empty() << endl;
    cout << dir << endl;
    cout << file_size("/Users/bertin/student.txt") << endl;
     */
    cout <<"This program allows you to navigate up to your desired directory on the system\n";
    string ls = "/Users/bertin/CLionProjects/";
    auto ls_iter = directory_iterator(ls);
    auto recurse_ls_iter = recursive_directory_iterator(ls);
    for(auto it:ls_iter){
        cout << ls_iter->path() << endl;
    }



}