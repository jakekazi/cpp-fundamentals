#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    int sum = n * (n + 1) / 2;

    std::cout << "Sum of first " << n << " natural numbers: " << sum << std::endl;

    return 0;
}