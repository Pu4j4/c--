#include<iostream>
using namespace std;
int main(){
    int var1=10;
    int var2=20;
    int *p=&var1;
    int *p1=&var2;
    cout<<"var1 is:"<<var1<<endl;
    cout<<"var2 is:"<<var2<<endl;
    cout<<"address of var1 is:"<<&var1<<endl;
    cout<<"address of var2 is:"<<&var2<<endl;
    cout<<"address of p is:"<<*p<<endl;
    cout<<"address of p is:"<<*p1<<endl;
    return 0;
}
