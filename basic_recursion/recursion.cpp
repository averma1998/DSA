#include <iostream>
using namespace std;

void name(int y) {
    if (y >= 1) {
        cout << "Ayush Verma" << endl;
        name(y - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    name(n);   
    return 0;
}
