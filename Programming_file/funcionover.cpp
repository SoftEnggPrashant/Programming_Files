#include<iostream>
using namespace std;
int sqr(int);
int add(int,int);
int main()
{
    int a,b,c;
    cout<<"enter the value";
    cin>>a;
    cout<<"enter the value b&c";
    cin>>b>>c;
    cout<<"square is="<<sqr(a);
    cout<<"\n addition is="<<add(b,c);
    return 0;
}
  int sqr(int x)
  {
      return(x*x);
  }
    int add(int y,int z)
    {
        return(y+z);
    }
