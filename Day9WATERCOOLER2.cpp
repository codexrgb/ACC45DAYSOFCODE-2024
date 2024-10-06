
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int maxMonths = (Y > X) ? (Y - 1) / X : 0;

        cout << maxMonths << endl;
    }

    return 0;
}