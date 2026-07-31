#include <bits/stdc++.h>
using namespace std;

//1️⃣ Start from the first element
//2️⃣ Assume it is the minimum
//3️⃣ Find the smallest element in the remaining array
//4️⃣ Swap it with the current element
//5️⃣ Repeat for the next position

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int n;
    cout<<"Enter the numbers to be sorted :"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
