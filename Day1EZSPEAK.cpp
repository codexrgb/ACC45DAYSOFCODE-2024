#include <iostream>
#include <string>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string pronounce(const std::string& S) {
    int consecutiveConsonants = 0;
    
    for (char c : S) {
        if (isVowel(c)) {
            consecutiveConsonants = 0; // Reset count
        } else {
            consecutiveConsonants++;
            if (consecutiveConsonants >= 4) {
                return "NO"; // 4 or more consecutive consonants
            }
        }
    }
    
    return "YES"; // No 4+ consecutive consonants found
}

int main() {
    int T;
    std::cin >> T;
    
    while (T--) {
        int N;
        std::cin >> N;
        
        std::string S;
        std::cin >> S;
        
        std::cout << pronounce(S) << std::endl;
    }
    
    return 0;
}
