#include <iostream>

int main() {
    double base, height;
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter height: ";
    std::cin >> height;

    double area = 0.5 * base * height;
    std::cout << "Area of triangle: " << area << std::endl;

    return 0;
}