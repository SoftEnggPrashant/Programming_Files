#include<bits/stdc++.h>
using namespace std;
int main(){
    int v[100];
    int n,h,x;
    cin>>n>>h>>x;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a = v[n-1]+x;
    if(a==h){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}