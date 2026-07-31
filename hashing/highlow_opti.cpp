#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle, minEle;

    // Find highest and lowest frequency elements
    for (auto it : freq)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxEle = it.first;
        }

        if (it.second < minFreq)
        {
            minFreq = it.second;
            minEle = it.first;
        }
    }

    cout << "Highest frequency element: " << maxEle << endl;
    cout << "Lowest frequency element: " << minEle << endl;

    return 0;
}
