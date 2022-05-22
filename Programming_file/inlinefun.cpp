#include<iostream>
using namespace std;
inline int dfg( int x,int y)
{

    return((x>y)?x:y);
}

int main()
{

    int a,b;
    cout<<"enter the no a&b";
    cin>>a>>b;
    cout<<"greater is "<<dfg(a,b);
    return 0;
}
