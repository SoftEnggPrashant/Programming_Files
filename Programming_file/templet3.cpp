#include<iostream>
using namespace std;
template<class T1,class T2,class T>
class test
{
    public:
    T  a,b,c;
    T getdata(T1 x,T2 y)
    {
        a=x;
        b=y;
        c=(a*b);
        return(c);
    }
    void disp()
    {
        cout<<"multiply is ="<<c<<endl;
    }
};
  //template<class T1,class T2>
 // void test::disp()
  //{
    //  cout<<"multiply is="<<c
  //}

   int main()
   {
       test<float,float,float> obj;
       obj.getdata(4.1,6.2);
        obj.disp();
       return 0;
   }
