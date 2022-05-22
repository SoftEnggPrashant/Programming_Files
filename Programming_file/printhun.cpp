#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int i=0;
    // while(i<100)
    // {
    //     i++;
    //     cout<<" "<<i;

    //     }
    string s = "abcda";
    for(int i=0;i<s.size();i++)
         cout<<s.substr(i,s.size())<<endl;
    
    cout<<count(s.begin(),s.end(),'a')<<endl;
    return 0;
}
