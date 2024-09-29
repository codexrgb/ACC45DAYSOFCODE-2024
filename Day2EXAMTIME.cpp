#include <iostream>

int main() {
    int T; // Number of test cases
    std::cin >> T;

    while (T--) {
        int dragon[3], sloth[3]; // Scores of Dragon and Sloth

        // Read Dragon's scores
        for (int i = 0; i < 3; i++) {
            std::cin >> dragon[i];
        }

        // Read Sloth's scores
        for (int i = 0; i < 3; i++) {
            std::cin >> sloth[i];
        }

        // Calculate total scores
        int dragonTotal = dragon[0] + dragon[1] + dragon[2];
        int slothTotal = sloth[0] + sloth[1] + sloth[2];

        // Compare scores
        if (dragonTotal > slothTotal) {
            std::cout << "Dragon" << std::endl;
        } else if (dragonTotal < slothTotal) {
            std::cout << "Sloth" << std::endl;
        } else { // Total scores tied
            if (dragon[0] > sloth[0]) { // Compare DSA scores
                std::cout << "Dragon" << std::endl;
            } else if (dragon[0] < sloth[0]) {
                std::cout << "Sloth" << std::endl;
            } else { // DSA scores tied
                if (dragon[1] > sloth[1]) { // Compare TOC scores
                    std::cout << "Dragon" << std::endl;
                } else if (dragon[1] < sloth[1]) {
                    std::cout << "Sloth" << std::endl;
                } else { // All scores tied
                    std::cout << "Tie" << std::endl;
                }
            }
        }
    }

    return 0;
}
