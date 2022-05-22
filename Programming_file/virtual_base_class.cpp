#include<iostream>
using namespace std;
class base
{
    int a=20;
    public:
    void disp1()
    {
        cout<<"value of A:"<<a<<endl;
    } 
};
class b: public virtual base
{ 
  int b=40;
  public:
  void disp2()
  {
      cout<<"vlaue of B:"<<b<<endl;

  } 
};
class c:public virtual base
{
    int c=50;
    public:
    void disp3()
    {
      cout<<"vlaue of c:"<<c<<endl;
        
    }
};
class d :public b,public c
{
  int d=60;
  public:
  void disp4()
  {
      cout<<"vlaue of D:"<<d<<endl;
  }
};
int main()
{
    d t;
    t.disp1();
    t.disp2();
    t.disp3();
    t.disp4();
    return 0;
}