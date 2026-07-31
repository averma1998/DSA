#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main (){
    int og_num ;
    cout<<"Enter a number :"<<endl;
    cin>> og_num;
    
    int rev_num = 0;
    while (og_num>0){
        int last_digit = og_num% 10 ;
        rev_num = rev_num*10 + last_digit;
        og_num = og_num/ 10;   
    }

    cout<<"the reversed number is  : "<< rev_num << endl;

        return 0;

}