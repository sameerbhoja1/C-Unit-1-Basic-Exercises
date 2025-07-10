#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Enter a number: ";
    cin >> A;

    for (int i = 1; i <= 10; i++) {
        cout << A << " x " << i << " = " << A * i << endl;
    }

    return 0;
}
