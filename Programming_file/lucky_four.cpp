#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        int count,s=0;
        while (n!=0)
        {
            count=n%10;
            if(count%4==0 && count/4==1){
                s++;
            }
            n=n/10;
        }
        cout<<s<<endl;
    }
    return 0;
}