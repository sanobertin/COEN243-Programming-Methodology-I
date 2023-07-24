//
// Created by Bertin Mihigo Sano and Krudi
//
#include <string>
#include <iostream>

using namespace std;
bool testPalindrome(string s){
    int s_size = (int) s.size(); // determine the size of the input string
    s_size--; // -1 for array indexing
    string ss; // reversed string
    char arr_ss[s_size];
    for(int i=s_size;i>=0;i--){ // a loop to reverse param string s
        arr_ss[i] = s[s_size-i];
    }
    ss = (string) arr_ss;
    cout << ss << endl;
    if(ss==s)
        return true;
    else {
        cout <<"Not a match! Type something else\n";
    }

}


int main(){
    string input;
    cout <<"Type an a word/statement to verify if it's a palindrome" << endl;
    cin >> input;
    cout << testPalindrome(input) << endl;

}