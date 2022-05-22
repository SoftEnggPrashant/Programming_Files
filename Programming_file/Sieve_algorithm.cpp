#include<bits/stdc++.h>
using namespace std;
int N = 10e5+10;
vector<bool> isPrime(N,1);
int main(){

    isPrime[0] = isPrime[1] = false;
    for(int i=2;i<N;i++){
        if(isPrime[i]){
            for(int j = 2*i;j<N;j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=1;i<=20;i++){
        if(isPrime[i]) cout<<i<<" ";
    }
    return 0;
}