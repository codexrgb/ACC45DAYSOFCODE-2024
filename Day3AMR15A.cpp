#include <iostream>

int main() {
    int N; // Number of soldiers
    std::cin >> N;

    int lucky = 0, unlucky = 0; // Count of lucky and unlucky soldiers

    for (int i = 0; i < N; i++) {
        int weapons; // Number of weapons each soldier holds
        std::cin >> weapons;

        if (weapons % 2 == 0) { // Even number of weapons (lucky)
            lucky++;
        } else { // Odd number of weapons (unlucky)
            unlucky++;
        }
    }

    if (lucky > unlucky) {
        std::cout << "READY FOR BATTLE" << std::endl;
    } else {
        std::cout << "NOT READY" << std::endl;
    }

    return 0;
}

