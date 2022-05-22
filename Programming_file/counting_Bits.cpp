#include<bits/stdc++.h>
using namespace std;
int numofOnes(int n){
    int count =0;
    while(n){
       n= n & (n-1);
        count++;
    }
    return count;
}
void coutingBit(int n){
    vector<int> v;
    for(int i=0;i<=n;i++){
        int a= numofOnes(i);
         v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n=5;
    coutingBit(n);
    return 0;
    
}