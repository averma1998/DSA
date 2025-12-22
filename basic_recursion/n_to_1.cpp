#include <iostream>
using namespace std;

    void count(int y) {
    if (y >= 1) {
        
        cout << y << endl;
        count(y - 1);
        
    }
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    count(n);   
    return 0;
}
