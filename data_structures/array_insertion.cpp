#include <iostream>
using namespace std;

int main()
{
    int arr[5]={};
    cout<<"Enter  elements to insert into the array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout << "Array elements are: ";
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

      return 0;
}