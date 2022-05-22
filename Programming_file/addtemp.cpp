#include<iostream>
using namespace std;
template(class T1,class T2)

class total
{
    T1=a;
    T2=b;
    total(T1 x,T2 y)
    {
        a=x;
        b=y;
   //c=a+b;
    }
    void disp()
    {
      //cout<<"sum is="<<c<<endl;
      cout<<"value of a="<<a<<endl<<"value of b"<<B;
    }

};
int main()
{
    total<int,float>obj(6,7.10);
    obj.disp();
    return 0;
}
