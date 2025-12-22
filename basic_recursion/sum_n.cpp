#include <iostream>
using namespace std;

int sum(int y) {
    if (y == 0) {
        return 0;              // base case
    }
    return y + sum(y - 1);     // recursive relation
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int print_sum = sum(n);
    cout << "Sum = " << print_sum << endl;

    return 0;
}
