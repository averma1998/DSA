#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int gcd(int n1,int n2){
    int gc = 1;
for(int i =1 ; i<=min(n1, n2);i++){
    if(n1%i==0 && n2%i==0){
        gc=i;
    }
}
return gc;
}

int main (){
    int num1 ,num2;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    int hcf = gcd(abs(num1),abs(num2));
    cout<<"GCD of boh number is :"<< hcf<<endl;
   
        return 0;

}