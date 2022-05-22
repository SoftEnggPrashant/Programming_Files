#include<bits/stdc++.h>
using namespace std;
int Hammin(int x,int y){
    int n =x^y;
    int setBit =0;
    while(n>0){
        setBit += x&1;
        n = n>>1;
    }
    return setBit;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<Hammin(x,y)<<endl;
    return 0;
}