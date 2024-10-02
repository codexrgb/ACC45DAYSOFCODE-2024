
#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int B1, B2, B3; // Water bottles
        std::cin >> B1 >> B2 >> B3;

        // Count empty bottles
        int empty = (1 - B1) + (1 - B2) + (1 - B3);

        if (empty >= 2) {
            std::cout << "Water filling time" << std::endl;
        } else {
            std::cout << "Not now" << std::endl;
        }
    }

    return 0;
}
