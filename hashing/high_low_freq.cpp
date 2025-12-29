#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};

    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxEle, minEle;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;

        int count = 1;
        visited[i] = true;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;

        if (count > maxFreq)
        {
            maxFreq = count;
            maxEle = arr[i];
        }

        if (count < minFreq)
        {
            minFreq = count;
            minEle = arr[i];
        }
    }

    cout << "\nHighest frequency element: " << maxEle
         << " (" << maxFreq << " times)" << endl;

    cout << "Lowest frequency element: " << minEle
         << " (" << minFreq << " times)" << endl;

    return 0;
}
