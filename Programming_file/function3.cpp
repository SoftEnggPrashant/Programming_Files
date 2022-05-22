#include<iostream>
using namespace std;
int sqr(int x,int y)
{
    int c,d;
    c=x+y;
    d=c*c;
    return (c,d);
}
int main()
{
    int a,b,z;
    cout<<"enter the value";
    cin>>a>>b;
    z=sqr(a,b);
    cout<<"\n"<<a;
    cout<<"\n"<<b;
        cout<<"\nsquare is=\n"<<z;
    return 0;
}
