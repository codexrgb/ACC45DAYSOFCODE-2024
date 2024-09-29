#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int X, Y, Z; // Schools, students per school, passed students
        std::cin >> X >> Y >> Z;

        // Calculate total students
        int totalStudents = X * Y;

        // Check if passed students are more than 50%
        if (Z > totalStudents / 2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
