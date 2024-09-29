#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, X;
        std::cin >> N >> X;

        // Calculate minimum number of subscriptions needed
        int subscriptions = (N + 5) / 6; // Ceiling division

        // Calculate minimum total cost
        int totalCost = subscriptions * X;

        std::cout << totalCost << std::endl;
    }

    return 0;
}
