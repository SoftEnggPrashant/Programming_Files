#include<iostream>
using namespace std;
void svap(int&x,int&y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
}
  int main()
  {
      int a,b;
      cout<<"enter the value";
      cin>>a>>b;
      cout<<"\n before the interchange \n";
      cout<<"\n"<<a<<"\n"<<b;
      svap(a,b);
      cout<<"\n after the interchange \n";
      cout<<"\n"<<a<<"\n"<<b;
      return 0;
  }
