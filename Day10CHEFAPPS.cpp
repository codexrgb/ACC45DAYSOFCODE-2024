
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        // Calculate available memory
        int available = S - X - Y;

        // Check if third app can be installed
        if (available >= Z) {
            cout << 0 << endl;
        } else if (available + X >= Z || available + Y >= Z) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}