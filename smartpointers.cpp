//
// Created by Bertin Mihigo Sano on 2023-08-16.
// Implementation of the smart pointers C++
// Section 17
// Challenge 1

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} { cout << "\tTest constructor (" << data << ")" << endl; }
    Test(int data) : data {data} { cout << "\tTest constructor (" << data << ")" << endl; }
    int getData() const {return data; }
    ~Test() {cout << "\tTest destructor (" << data << ")" << endl; }
}; // end class def and decl

// Function prototypes
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>>&vec);

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}
// function declarations
unique_ptr<vector<shared_ptr<Test>>> make(){
    unique_ptr< vector<shared_ptr<Test>> > ptr = make_unique<vector<shared_ptr<Test>>>();
    return ptr; // will return a unique ptr of type <vector<shared_ptr<Test>>
}


void fill(vector<shared_ptr<Test>> &vec, int num){
    for(int i{1};i<=num;i++){
        cout <<"Enter data point ["<<i<<"]:";
        int input;
        cin >> input;
        shared_ptr<Test> ptr_Test = make_shared<Test>(Test(input));
        vec.push_back(ptr_Test);
    }
}


void display(const vector<shared_ptr<Test>>&vec){
    cout << "\tDisplay vector data\n";
    int ii {0};
    for(auto iter {vec.begin()}; iter != vec.end(); iter++){
        cout << vec[ii]->getData() << endl;
        ii++;
    }
    cout << "\t End of display\n";
}










