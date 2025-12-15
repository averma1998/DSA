#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

 int space = 2*(n-1);

for(int i = 1; i <= n; i++) {

    // left numbers
    for(int j = 1; j <= i; j++) {
        cout << j;
    }

    // spaces in between
    for(int j = 1; j <= space; j++) {
        cout << " ";
    }

    // right numbers
    for(int j = i; j >= 1; j--) {
        cout << j;
    }

    cout << endl;
    space -= 2;
}
}
