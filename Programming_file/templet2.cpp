#include<iostream>
using namespace std;
template<class T1,class T2>
 float  add(T1 x,T2 y)
{
    return(x+y);
}
int main()
{
    float a,b,c;
    cout<<"enter the value a&b";
    cin>>a>>b;
    c=add(a,b);
    cout<<"sum is ="<<c;
    return 0;

}
