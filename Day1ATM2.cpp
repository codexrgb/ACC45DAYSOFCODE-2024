#include <iostream>
#include <vector>

std::string atmWithdrawal(int N, int K, const std::vector<int>& A) {
    std::string result;
    for (int i = 0; i < N; i++) {
        if (A[i] <= K) { // Enough money
            K -= A[i]; // Update remaining money
            result += '1';
        } else { // Not enough money
            result += '0';
        }
    }
    return result;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        std::vector<int> A(N);
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }

        std::cout << atmWithdrawal(N, K, A) << std::endl;
    }

    return 0;
}
