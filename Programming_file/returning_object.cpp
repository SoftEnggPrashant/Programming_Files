#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x,
        b=y;
    }
    friend test sum(test,test);
    void putdata(test);
};
test sum(test t1,test t2)
{
    test t;
    t.a=t1.a+t2.b;
    t.b=t1.a*t2.b;
    return t;
}
void test::putdata(test t)
{
    cout<<"the value of A is:"<<t.a<<endl;
    cout<<"the value of B is:"<<t.b<<endl;
}
int main()
{
    test a,b,c,d;
    a.getdata(4,5);
    b.getdata(4,5);
    c=sum(a,b);
    d.putdata(c);
    return 0;
}