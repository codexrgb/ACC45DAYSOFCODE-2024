#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int X, Y; // Hours from Monday to Thursday, hours on Friday
        std::cin >> X >> Y;

        // Calculate total hours
        int totalHours = 4 * X + Y; // 4 days * X + Friday

        std::cout << totalHours << std::endl;
    }

    return 0;
}

