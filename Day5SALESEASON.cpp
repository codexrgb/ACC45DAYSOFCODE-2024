
#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int X; // Total amount spent
        std::cin >> X;

        int discount;
        if (X <= 100) {
            discount = 0;
        } else if (X <= 1000) {
            discount = 25;
        } else if (X <= 5000) {
            discount = 100;
        } else {
            discount = 500;
        }

        // Calculate final amount
        int finalAmount = X - discount;
        std::cout << finalAmount << std::endl;
    }

    return 0;
}