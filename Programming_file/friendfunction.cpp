#include<iostream>

using namespace std;
class test;
class temp
{
    int a,b,c;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
        c=a+b;
        cout<<"addtion is:"<<c<<endl;
    }
    void disp()
    {
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is:"<<b<<endl;
    }
    friend void add(test,temp);
};
class test
{
    int d,e,f;
    public:
    void putdata(int q,int z)
    {
        d=q;
        e=z;
        f=d*e;
        cout<<"multiplies is:"<<f<<endl;
    }
    void display()
    {
        cout<<"value of d is:"<<d<<endl;
        cout<<"value of e is:"<<e<<endl;
    }
    friend void add(test,temp);
};
void add(test t1,temp t2)
{
    int h;
    h=t2.c+t1.f;
    cout<<"sum is:"<<h<<endl;
}
int main()
{
    temp T1;
    test T2;
    T1.getdata(45,45);
    T2.putdata(4,5);
    T1.disp();
    T2.display();
    add(T2,T1);
    return 0;
}