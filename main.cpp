// Created by Bertin Mihigo Sano on 2023-08-25.
//

#include <iostream>
#include <algorithm>
#include <list>
typedef unsigned int uint;
using namespace std;

class Student{
private:
    string name {};
    uint age;

public:
    virtual ~Student() {
    }
    const string &getName() const {
        return name;
    }
    void setName(const string &name) {
        Student::name = name;
    }

    explicit Student(const string &name, int age) : name(name) {
        Student::age = age;
    }
    bool operator==(Student arg){
            if(name ==arg.getName())
                return true;
            else
                return false;
    };


    Student operator=(Student arg) {
            return *this;
    }

};

//std::__wrap_iter;
int main(){
    //vector<uint> cont {10,9,8,7,6,5};
    Student s1("Frank", 30);
    Student s2("Ross", 34);
    Student s3("BossBoos", 18);
    Student s4("Messi", 32);

    std::list<Student> myList{s1, s2};
    for(auto iter: myList){
        cout << iter.getName() << endl;
    }
    cout << endl;
    myList.push_back(s3);
    myList.push_front(s4);
    for(auto iter: myList){
        cout << iter.getName() << endl;
    }
    cout << endl;
    auto it = std::find(myList.begin(), myList.end(), s3);
    cout << "Found a student: "<< it->getName() << endl;
    return 0;
}