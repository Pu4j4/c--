#include <iostream>
using namespace std;
// defining structure
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    // declaring a variable
    struct Rectangle r1 = {10, 5};
    cout << sizeof(r1) << endl;
    // accessing and changing members
    r1.length = 20;
    r1.breadth = 15;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}
