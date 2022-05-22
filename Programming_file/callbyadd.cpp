#include<iostream>
using namespace std;
void svap(int*,int*);
int main()
{
    int a,b;
    cout<<"enter the value";
    cin>>a>>b;
    cout<<"\nbefore the interchange\n";
    cout<<a<<"\n"<<b;
    svap(&a,&b);
    cout<<"\nafter the interchange\n";
    cout<<a<<"\n"<<b;
    return 0;
}
    void svap(int*x,int*y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
