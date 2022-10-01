#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while(start <= end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    // We are at the center of a string now
    return true;
}

int main() {
    cout<<"Enter a string"<<endl;
    string s;
    cin>>s;
    if(isPalindrome(s)) {
        cout<<"String is a palindrome"<<endl;
    }
    else {
        cout<<"String is not a palindrome"<<endl;
    }
    return 0;
}