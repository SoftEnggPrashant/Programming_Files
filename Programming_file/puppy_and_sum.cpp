#include<bits/stdc++.h>
using namespace std;
int sum(int d,int n){
    int s;
    for (int i = d; i >0; i--)
    {
        s=0;
        for(int j=1;j<=n;j++){
            s+=j;
        }
        n=s;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int d,n,a;
        cin>>d>>n;
        a=sum(d,n);
        cout<<a<<endl;
    }
    return 0;
}