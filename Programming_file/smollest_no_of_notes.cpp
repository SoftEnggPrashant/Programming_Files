#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int a[] = {1,2,5,10,50,100};
        int ans=0,N;
        cin>>N;
        for (int j=5;j>=0;j--)
        {
            ans+=N/a[j];
            N%=a[j];
        }
        cout<<ans<<endl;
    }
    
}