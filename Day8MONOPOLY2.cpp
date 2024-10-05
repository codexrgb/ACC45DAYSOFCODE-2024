
#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int P, Q, R, S; // Profits of companies A, B, C, D
        std::cin >> P >> Q >> R >> S;

        // Calculate sum of profits of other companies
        int sum = Q + R + S;
        if (P > sum) {
            std::cout << "YES" << std::endl;
            continue;
        }

        sum = P + R + S;
        if (Q > sum) {
            std::cout << "YES" << std::endl;
            continue;
        }

        sum = P + Q + S;
        if (R > sum) {
            std::cout << "YES" << std::endl;
            continue;
        }

        sum = P + Q + R;
        if (S > sum) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
