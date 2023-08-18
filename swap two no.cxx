#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1st number:";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}