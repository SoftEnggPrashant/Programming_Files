#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e6+2;
    bool b[N];
    for(int i=0;i<N;i++){
        b[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b[a[i]]=true;
        }
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        if(b[i] == false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;


    return 0;
}