
#include <iostream>

int main() {
    int A, B, C, X; // Prepared topics and contest topic
    std::cin >> A >> B >> C >> X;

    // Check if contest topic matches any prepared topic
    if (X == A || X == B || X == C) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
