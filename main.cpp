
#include <iostream>

using namespace std;
/*
static float bmi(float height, float mass){
    float re;
    re = height / (mass*mass) ;
    return re;
}
struct Person{
    string name;
    unsigned int DOB;
    float height;
    float mass;
    float mass_index = re(height, mass);
};
int main() {
    // main body of c++ program
    //string t;
    //cout << endl << endl;
    //getline(cin, t, 'o');
    //cout << t;
    //vector <int> a = 5;
    // Below is a demo of a structure C++
    emp1 = 
    cout << "enter your name, year of birth, heigh, and mass" << endl;
    cin >>
    return 0;
}

*/


int main()
{
    int n, s, i, j;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
//for loop to put space
        for(s = i; s < n; s++)
            cout << " ";
//for loop for displaying star
        for(j = 1; j <= i; j++)
            cout << "* ";
// ending line after each row
        cout << "\n";
    }
    return 0;
}