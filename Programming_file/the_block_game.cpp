#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, ans, sum1=0,no;
        cin >> n;
        no=n;
        while (n != 0)
        {
            ans = n % 10;
            sum1=sum1*10+ans;
            n = n / 10;
        }
        if(sum1==no){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}