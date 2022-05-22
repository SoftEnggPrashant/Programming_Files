#include<iostream>
using namespace std;
 class Test
 {
     int no;
     static int count;
     public
         void gfg(int);
         void disp(void);
 };
 int Test::count
void Test::gfg(int x)
{
     no=x;
    cout<<"number is ="<<no;
    count++;
}
void Test::disp(void)
{
    cout<<"count is="<<count;
}

int main()
{
    Test a,b,c;
    a.disp();
    b.disp();
    c.disp();
    a.gfg(100);
    b.gfg(200);
    c.gfg(300);
    a.disp();
    b.disp();
    c.disp();
    return 0;
    }
