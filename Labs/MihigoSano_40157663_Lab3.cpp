
// concordia id 40157663
// July 19 2023
// This program asks user to enter a number then it checks if that number is a root of 2
// if it's a root of 2 then it will print a sequence of roots up to 1.
#include <iostream>
#include <cmath>

using namespace std;

bool verify2throot(double num){
    double res;
    res = log(num)/ log(2);
    if(res == (int) res)
        return true;
    else
        return false;

}



int main(){
    bool result;
    int num;
    cout << "Enter a number which is a multiple of 2" << endl;
    while (cin>>num){
        result = verify2throot((double) num);
        if (result) { // if result == true
            break;
        }
        else {
            cout << "Enter a number which is a multiple of 2" << endl;
            continue;
        }
    }
    cout << endl << endl<< endl;
    int get_exp;
    get_exp = (int) (log(num)/log(2));
    for(int i=get_exp;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout << (int)pow(2,j) <<"\t";
        }
    cout << endl;
    }
    return 0;

}