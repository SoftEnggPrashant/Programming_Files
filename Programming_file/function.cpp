#include<iostream>
using namespace std;
void add(int x, int y)
{
    int c=x+y;
    cout<<"\n no of addition is=\n"<<c;
}
   int main()
   {
       int a,b;
       cout<<"\n enter the no\n";
       cin>>a>>b;
       add(a,b);
       return 0;
   }
