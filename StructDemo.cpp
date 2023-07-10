
#include <iostream>

using namespace std;

static float bmi(float height, float mass){
    float re;
    re = height / (mass*mass) ;
    return re;
}
float* ptb;
struct person{
    string name;
    unsigned int DOB;
    float height;
    float mass;
    //ptb = &bmi(height, mass);
    float mass_index = *ptb;
};
int main() {
    person emp1;
    cout << "enter your name, year of birth, height, and mass" << endl;
    cin >> emp1.name >> emp1.DOB >> emp1.height >> emp1.mass;
    float i = bmi(emp1.height, emp1.mass);
    ptb = &i;
    //emp1.mass_index = *ptb;
    cout << emp1.mass_index;
    return 0;
}


