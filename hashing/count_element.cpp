#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};   // to mark counted elements

    for (int i = 0; i < n; i++) {

        // skip if already counted
        if (visited[i] == true)
            continue;

        int count = 1;  // current element already counted once

        // count frequency
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        // print result
        cout << arr[i] << " " << count << endl;
    }

    return 0;
}
