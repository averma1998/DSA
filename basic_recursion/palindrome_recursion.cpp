#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "ayush";
    int n = s.length();
    bool isPalindrome = true;

    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
             isPalindrome = false;
            break;
        }
    }
       if (isPalindrome) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "False: It is not Palindrome." << endl;
    }



    return 0;
}