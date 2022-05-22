#include<bits/stdc++.h>
using namespace std;
long long reverseBits(long long n){
    long long rev =0;
    int i=0;
    while(i<32){
        rev = rev << 1;
        if(n&1==1) rev = rev^1;
        n=n>>1;
        i++;
    }
    return rev;
}
int main(){
    long long n;
    cin>>n;
    cout<<reverseBits(n)<<endl;
    return 0;
}