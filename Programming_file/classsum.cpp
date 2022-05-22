#include<iostream>
using namespace std;
template<class T1 T2 T>
class total
{
    T1 a,T2 b,T c;
public:
     total(T1 x,T2 y)
    {
        c= (a+b);
    }
};
int main()
{
  int a,b,c;
    cout<<"enter the value a&b";
    cin>>a>>b;
    total<int>A(a,b);
    cout<<"sum is ="<<c;
    return 0;

}
