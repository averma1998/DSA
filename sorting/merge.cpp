  #include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int l,int m ,int h){
    vector <int> temp;
    int left =l;
    int right = m+1;

    while (left <= m && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= m) {
        temp.push_back(arr[left]);
        left++;
    }
     while (right <= h) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = l; i <= h; i++) {
        arr[i] = temp[i - l];
    }
}

void merge_sort(vector<int> &arr,int low , int high){
    int mid = (low+high)/2;
    if(low>=high)return;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    int n;
    cout<<"Enter the size of array to be sorted :"<<endl;
    cin>>n;
    cout<<"Enter the elements of array to be sorted :"<<endl;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
