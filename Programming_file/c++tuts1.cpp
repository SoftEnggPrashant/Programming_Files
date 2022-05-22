#include<iostream>
#include <bits/stdc++.h>

using namespace std;
class time
{
public:

  int h,m;

    void gettime(int ,int);
    void puttime();
    void sum(time,time);
    //void disp();
};
void time::gettime(int x,int y)
{
    h=x;
    m=y;
}
void time::puttime()
{
    cout<<"the hours is:"<<h<<endl;
    cout<<"the minuts is:"<<m<<endl;
}
void time::sum(time t1,time t2)
{
    m=t1.m+t2.m;
    h=h+t1.h+t2.h;
    h=m/60;
    m=h%60;
}
int main()
{
 time obj1;
 time obj2;
 time obj3;
 obj1.settime(2,40);
 obj2.settime(4,30);
 obj3.sum(obj1,obj2);
 obj1.puttime();
 obj2.puttime();
 obj3.puttime();

 return 0;
}
