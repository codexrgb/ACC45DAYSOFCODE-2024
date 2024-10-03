
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        int max = X;

        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            X += a;
            max = max < X ? X : max;
        }

        cout << max << endl;
    }

    return 0;
}