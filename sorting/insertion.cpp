#include <bits/stdc++.h>
using namespace std;

//It takes a element and places it in correct position.

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array to be sorted :"<<endl;
    cin>>n;
    cout<<"Enter the elements of array to be sorted :"<<endl;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
