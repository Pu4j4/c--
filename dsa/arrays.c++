#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int A[10]={2,4,6,8,10,12};
    for (int i = 0; i < 10; i++)
    {
        cout<<sizeof(A)<<endl;
        cout<<A[i]<<endl;
    }
    return 0;
}