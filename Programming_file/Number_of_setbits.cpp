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
bool powerOftwo(int n){
    return (n && !(n&(n-1)));
}
int main(){
    int n;
    cin>>n;
    cout<<numofOnes(n)<<endl;
    cout<<powerOftwo(n)<<endl;
    return 0;
}