#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,q;
        cin>>N>>q;
        int arr[N+10];
        int forward[N+10];
        int backward[N+10];
        forward[0] = backward[N+1] = 0;
        for(int i=1;i<=N;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=N;i++){
            forward[i] = __gcd(forward[i-1],arr[i]);
        }
        for(int i=N;i>=0;i--){
            backward[i] = __gcd(backward[i+1],arr[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;

        }
    }
    return 0;
}