#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the sum using the function
    int result = sum(num1, num2);

    // Display the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
