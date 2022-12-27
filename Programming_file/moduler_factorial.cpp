#include<bits/stdc++.h>
using namespace std;
#define m 1000000007

int main(){

    int n,res = 1;
    cin >> n;

    for(int i= 1;i<=n;i++){
        res = (res*i)%m;
    }

    cout<<res<<endl;
}