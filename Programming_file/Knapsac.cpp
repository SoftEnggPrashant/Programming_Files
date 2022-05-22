#include<bits/stdc++.h>
using namespace std;
int knapsac(int value[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        knapsac(value,wt,n-1,w);
    }
    return max(knapsac(value,wt,n-1,w-wt[n-1])+value[n-1],knapsac(value,wt,n-1,w));
}
int main(){
    int v[] = {100,50,150};
    int wt[] = {10,20,30};
    int w = 50;
    cout<<knapsac(v,wt,3,w)<<endl;
    return 0;
}