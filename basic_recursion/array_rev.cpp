#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = arr[n - 1 - i];
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> result = reverseArray(arr);

    cout << "Reversed Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
