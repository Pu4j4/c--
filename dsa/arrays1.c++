#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int A[n];
    A[0]=2;
    A[1]=3;
    A[2]=4;
    A[3]=5;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }    
}