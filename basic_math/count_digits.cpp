#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countdigits(int n){
    int count = (int)log10(n)+1;
    return count;
}
int main(){
int N = 365953;
int digits = countdigits(N);
cout<<"The no of digits are :"<<digits<<endl;

return 0;
}