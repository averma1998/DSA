#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    // Armstrong
    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}
