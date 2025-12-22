#include <iostream>
using namespace std;

int fact(int y) {
    if (y == 0) {
        return 1;              // base case
    }
    return y * fact(y - 1);     // recursive relation
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int print_fact = fact(n);
    cout << "Factorial = " << print_fact << endl;

    return 0;
}
