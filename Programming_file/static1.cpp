#include<iostream>
using namespace std;
class test
{
int a;
public:
    static int count;
 void getdata(int x)
 {
     a=x;
     cout<<"the no is= "<<a<<endl;

     count++;
 }
 void disp()
 {
     cout<<"counter is=  "<<count<<endl;
 }
};
int test::count=0;
 int main()
 {

     test t1,t2,t3;
     t1.disp();
     t2.disp();
     t3.disp();
     t1.getdata(100);
     t2.getdata(200);
     t3.getdata(300);
     t1.disp();
     t2.disp();
     t3.disp();
 }
