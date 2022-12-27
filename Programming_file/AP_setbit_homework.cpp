#include<iostream>
using namespace std;

int findAp(int n){

    int ans = 3*n+7;
    return ans;
}

int setBits(int a,int b){

    int aSetbit = 0;
    int bSetbit = 0;

    while(a!=0 || b!=0){
        
        if((a&1)==1){
            aSetbit++;
        }
        if((b&1)==1){
            bSetbit++;
        }
        a = a>>1;
        b = b>>1;
    }
    return aSetbit+bSetbit;
}

int NthFibonacci(int n){

    if(n ==0 || n==1){
        return n;
    }
    
    int ans = 0;
    int first =0;
    int second = 1;
    for(int i=2;i<n;i++){
        ans = first+second;
        first = second;
        second = ans;
    }

    return ans;
}

int main(){

    // int n;
    // cin>>n;

    // cout<<"N th term is :"<<findAp(n)<<endl;

    // int a,b;
    // cin>>a>>b;

    // cout<<"total set bit of a and b : "<<setBits(a,b)<<endl;

    // int n;
    // cin>>n;
    // cout<<"Nth number of fibonacci is : "<<NthFibonacci(n)<<endl;

    return 0;
}