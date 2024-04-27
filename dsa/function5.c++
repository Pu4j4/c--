#include <iostream>

// Function declaration to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        std::cout << num << " is even." << std::endl;
    } else {
        std::cout << num << " is odd." << std::endl;
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Function call to check if the number is even or odd
    checkEvenOdd(num);

    return 0;
}
