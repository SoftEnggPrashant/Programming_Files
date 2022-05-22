#include<iostream>
using namespace std;
long fact(int);
int main()
{
    int a;
    cout<<"enter the value";
    cin>>a;
    cout<<"factorial is="<<fact(a);
    return 0;
}
  long fact(int x)
  {
      if(x==0)
      {
          return(1);
      }
      return(x*fact(x-1));
  }
