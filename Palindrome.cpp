/*
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
 */

// The code above is deprecated
// I will implement same solution but using  deque data structure

#include <iostream>
#include <deque>
#include <string>
#include <iomanip>
using namespace std;

bool isPalindrome(const string &arg){
    deque<char> arg_dq, reverse_arg_dq;
    for (int i=0;i<arg.size();i++){ // initialoze my deque container
        arg_dq.push_back(arg[i]);
    }
    while (arg_dq.size() > 1 ){ // execute until string size reached 1 or less
        if(arg_dq.front() == arg_dq.back()){
            arg_dq.pop_back();
            arg_dq.pop_front();
            continue;
        }
        else{
            return false; // arg is not palindrome
        }
    }
    if(arg_dq.size() <=1)
        return true; // if function execution reaches here arg is a palindrome

}// end my function

int main(){
    cout << "Enter any word you want to check if it'\s a palindrome or not\n";
    string userInput {};
    cin >> userInput;
    cout << boolalpha << isPalindrome(userInput) << endl;

    return 0;
}




















































