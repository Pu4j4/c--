#include <iostream>
using namespace std;

// Define a structure to represent a person
struct Person {
    string name;
    int age;
    char gender;
};

int main() {
    // Declare a variable of type Person
    Person person1;

    // Initialize the fields of person1
    person1.name = "Alice";
    person1.age = 25;
    person1.gender = 'F';

    // Print the details of person1
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Gender: " << person1.gender << endl;

    return 0;
}
