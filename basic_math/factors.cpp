#include <bits/stdc++.h>
using namespace std;

// Function to get all divisors of N
vector<int> getDivisors(int N) {
    vector<int> res;

    // Loop till sqrt(N)
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            res.push_back(i);

            // Add the paired divisor
            if (i != N / i) {
                res.push_back(N / i);
            }
        }
    }

    return res;
}

int main() {
    int N;
    cout<<"Enter a number to get factors :"<<endl;
    cin>>N;

    vector<int> result = getDivisors(N);

    cout << "Divisors of " << N << ": ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
