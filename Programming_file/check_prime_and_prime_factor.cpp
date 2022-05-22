#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // bool isprime = true;
    // for(int i=2;i<=sqrt(n);i++){
    //     if(n%i==0) isprime = false;  this comment section check the number is prime or not
    // }
    // cout<< isprime<<endl;

    // prime factors for givin number

    vector<int> prime;
    for(int i=2;i<=sqrt(n);i++){   //every number is smole factor is prime number for example   36 -> 2
        while(n%i==0){
            prime.push_back(i);
            n/=i;
        }
    }
    if(n>1) prime.push_back(n);
    for(auto val:prime) 
        cout<<val<<endl;

    return 0;
}