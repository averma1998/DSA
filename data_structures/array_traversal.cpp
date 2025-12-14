#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[]= {20,30,52,45,67};

    for(int i=0;i<5;i++){
        
        sum= sum + arr[i];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
    return 0;
}

