#include <iostream>
using namespace std;

// Define a structure for a student
struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    // Declare a structure variable
    Student student1;

    // Declare a pointer to a structure
    Student *ptrStudent;

    // Assigning values to the structure members using dot operator
    student1.name = "Alice";
    student1.age = 20;
    student1.gpa = 3.7;

    // Assigning address of structure variable to pointer
    ptrStudent = &student1;

    // Accessing structure members using arrow operator
    cout << "Student Name: " << ptrStudent->name << endl;
    cout << "Student Age: " << ptrStudent->age << endl;
    cout << "Student GPA: " << ptrStudent->gpa << endl;
}