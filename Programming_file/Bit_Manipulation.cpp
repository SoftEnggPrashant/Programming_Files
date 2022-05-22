#include<bits/stdc++.h>
using namespace std;
//check the ith bit
int check(int n,int posi){
    return(n>>posi) &1;
}
//set the bit ith position
int setBit(int n,int pos){
    return n | (1<<pos);
}
//clear ith bit
int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n&mask);
}
//update the ith bit
int updateBit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n=n&mask;
    return n|(value<<pos);
}
//equal sum and xor
int equalSum(int n){
    int ans =0;
    for(int i=0;i<=n;i++){
        if(i+n == (n^i)){
            ans++;
        }
    }
    return ans;
}

int main(){
    int a =23;
    int p= 3;
   // cout<<check(5,2)<<endl;
   //cout<<setBit(a,p)<<endl;
   //cout<<clearBit(a,p)<<endl;
   //cout<<updateBit(a,p,1)<<endl;
   cout<<equalSum(a)<<endl;



   return 0;

}