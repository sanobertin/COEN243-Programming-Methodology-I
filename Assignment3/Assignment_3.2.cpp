/* Assignment 3
 * Question 2
 * Recursive function to check whether number is palindrome or not
 * Worked in a group of 2
 * Kruti Patel. Student ID:
 * Bertin Mihigo Sano. Student ID: 40157663
 */


#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    // original (str[start] != str[end])
    else if ((str[start] != str[end]) && (start==end)) {
        return false;
    }
    else
        return isPalindrome(str, start + 1, end - 1);
}

bool testPalindrome(const string& str) {
    int length = str.length();
    return isPalindrome(str, 0, length - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (testPalindrome(input)) {
        cout << "It's a palindrome." << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }
}