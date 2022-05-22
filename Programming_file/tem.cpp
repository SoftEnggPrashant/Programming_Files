#include<iostream>

using namespace std;

template<class T1,class T2,class T>
class test
{
private:
    T1 a;
    T2 b;
  public:

       void getdata(T1 x,T2 y)
       {
           a=x;
           b=y;
       }
       T multi()
       {
           return(a*b);
       }

};

int main()
{
    float a,b;
    test<float,float,float> abc();
    cout<<"enter the value a&b";
    cin>>a>>b;
    abc.getdata(a,b);
    float c= abc.multi();
    cout<<"multiplie is:"<<c;

    return 0;
}


