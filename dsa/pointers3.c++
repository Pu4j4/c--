#include<iostream>
using namespace std;
int main()
{
    // pointer to an array
    int A[5]={2,3,4,5,6};
    int *p;
    // assigning p to A
    p=A;
    //also we can write like below statement using ampersand
    p=&A[0];
    // we can print all the values in the array using for loop
    for(int i=0;i<5;i++)
    cout<<A[i]<<endl;
    return 0;
}