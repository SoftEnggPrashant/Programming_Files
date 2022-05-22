#include<iostream>
using namespace std;
class test
{
    int code;
    float price;
  public:
  test(int x,float y);
  test(test &t);
  void disp();
};
test::test(int x,float y)
  {
      code=x;
      price=y;
  }
test::test(test &t)
{
    code=t.code;
    price=t.price;
}
void test::disp()
{
    cout<<"value of code is:"<<code<<endl;
    cout<<"value of price is:"<<price<<endl;
}
int main()
{
    test a(101,50.56);
    test b(a);
    test c(a);
    test d(a);
    cout<<"object a"<<endl;
    a.disp();
    cout<<"object b"<<endl;
    b.disp();
    cout<<"object c"<<endl;
    c.disp();
    cout<<"object d"<<endl;
    d.disp();
    return 0;
}