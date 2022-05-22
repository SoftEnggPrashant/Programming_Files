#include<iostream>
using namespace std;
int main()
{
    int no,sum=0,i;
    cout<<"enter the no";
    cin>>no;
     for(i=0;i<=no;i++)
     {
         sum=sum+i;
         cout<<"\n"<<i;
     }
     cout<<"\n"<<sum;
     return 0;
}
