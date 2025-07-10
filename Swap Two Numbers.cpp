#include <iostream>
using namespace std;

int main() {
    int X, Y, T;
    cout << "Enter The Value Of X: ";
    cin >> X;
    cout << "Enter The Value Of Y: ";
    cin >> Y;
    T = X;
    X = Y;
    Y = T;
    cout << "After swap, A = " << X << ", B = " << Y << endl;
    return 0;
}
