#include <iostream>
#include <vector>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;

        std::vector<int> B(N);
        for (int i = 0; i < N; i++) {
            std::cin >> B[i];
        }

        bool valid = true;
        int sum = 0;

        // Count number of 1s
        for (int i = 0; i < N; i++) {
            sum += B[i];
        }

        // If N is odd and sum is odd, or if N is even and sum is odd
        if ((N % 2 == 1 && sum % 2 == 1) || (N % 2 == 0 && sum % 2 == 1)) {
            valid = false;
        }

        if (valid) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
