#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int X, Y; // CRED coins per bill, number of bills
        std::cin >> X >> Y;

        // Calculate total CRED coins earned
        int totalCoins = X * Y;

        // Calculate maximum number of bags
        int maxBags = totalCoins / 100; // 100 coins per bag

        std::cout << maxBags << std::endl;
    }

    return 0;
}