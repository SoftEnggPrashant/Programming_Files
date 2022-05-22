#include<iostream>
using namespace std;
class test
{
    int count=0;
    public:
    test()
    {
        count++;
        cout<<"object created"<<count<<endl;
    }
    ~test()
    {
        cout<<"object destroyed"<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"main block"<<endl;
    test t;
    cout<<"block1"<<endl;
    {
        test t2,t3;
        cout<<"exite block1"<<endl;
    }
    cout<<"exit from main block"<<endl;
    return 0;
}