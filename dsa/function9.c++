#include <iostream>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int number;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cin>> number;

    // Calculate and print the square of the number
    std::cout << "Square of " << number << " is: " << square(number);
}