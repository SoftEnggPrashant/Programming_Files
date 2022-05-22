#include<iostream>
using namespace std;
template<class T= int,class T1= int,class T2= int>
class test
{
    public:
    T a,b,c;
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
       test<float,float,int>obj;
       obj.getdata(4.20,6.40);
        obj.disp();
       return 0;
   }
