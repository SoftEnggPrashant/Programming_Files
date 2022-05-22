#include<iostream>
using namespace std;
template<class T1,class T,class T2>
class mull
{
    T a,b,d;
public:
    T getdata(T1 a)
    {
        b=(a*a);
        return(b);
    }
    void disp()
    {
        cout<<"multip is="<<b<<endl;
    }
    void dry(T2 d)
    {
        cout<<"the element is\n"<<d;
    }

};

 int main()
 {
     float c,e;
     mull<float,float,int>obj;
     cout<<"enter the element\n";
     cin>>c;
     obj.getdata(c);
     obj.disp();
     cout<<"enter the no ";
     cin>>e;
     obj.dry(e);
  return 0;
 }
