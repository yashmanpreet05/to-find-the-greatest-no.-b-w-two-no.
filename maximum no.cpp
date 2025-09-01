#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        cout<<a<<"  is greater";
    }
    else
    {
        cout<<b<<"  is greater";
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"enter the value of a&b:";
    cin>>a>>b;
    max(a,b);
    return 0;
}