#include <iostream>
using namespace std;

int main() {
    for (int r = 0; r < 7; r++) {
        // C shape
        for (int c = 0; c < 5; c++) {
            if (r == 0 || r == 6)
                cout << "x";
            else if (c == 0)
                cout << "x";
            else
                cout << " ";
        }

        cout << "   "; // space

        // First '+'
        for (int p = 0; p < 5; p++) {
            if (p == 2 || r == 3)
                cout << "x";
            else
                cout << " ";
        }

        cout << "   "; // space

        // Second '+'
        for (int q = 0; q < 5; q++) {
            if (q == 2 || r == 3)
                cout << "x";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
