// Program to take values of the array from the user and print the array
#include <iostream>
using namespace std;

int main() {
 int a[5];
 cout << "Enter the values of an integer array:" << endl;

 // Taking input and storing it in an array
 for (int i = 0; i < 5; ++i) {
 cin >> a[i];
 }

 cout << "Displaying integers:" << endl;

 // Printing elements of the array
 for (int i = 0; i < 5; ++i) {
 cout << a[i] << endl;
 }
 return 0;
}
