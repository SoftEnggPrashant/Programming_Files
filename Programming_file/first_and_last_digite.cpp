#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        vector<int>s;
        int n,sum,z,y;
        cin>>n;
        while (n!=0)
        {
            sum=n%10;
            s.push_back(sum);
            n=n/10;
        }
        z=s[0];
        for(int i=0;i<s.size();i++)
        {
             y=s[i];
             //cout<<y<<endl;
        }
        int add=z+y;
        cout<<add<<endl;
    }
    return 0;
}