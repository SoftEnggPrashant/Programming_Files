#include<bits/stdc++.h>
using namespace std;
// this fuction work same as pow function
int BEP(int a,int b){  // this is the recursive mathod  
    if(b==0) return 1;

    int res = BEP(a,b/2);        // recursive call
    if(b&1) return a*(res*1LL*res);  // The power is odd  1LL means colculation is long long
    else return res*1LL*res;         // The powe is even  1LL means colculation is long long
}

int BEPitr(int a,int b){  // this is Iterative mathod using Bits
    int ans = 1;
    while(b){
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<BEP(a,b)<<endl; 
    cout<<BEPitr(a,b)<<endl;

    return 0;
}