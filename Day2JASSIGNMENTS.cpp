#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int X; // Start time
        std::cin >> X;

        // Calculate completion time (X + 3)
        if (X + 3 <= 10) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}

