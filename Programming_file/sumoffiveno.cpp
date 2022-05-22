#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    cout<<"enter the marks";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i];
        sum=sum+a[i];
    }
    cout<<"\n"<<sum;
    return 0;
}
