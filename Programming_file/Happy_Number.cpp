#include<bits/stdc++.h>
using namespace std;
bool check  = false;
set<int> s;
void happy(int n){
    int a =0;
    while(n!=0){
        int b = n%10;
        a += pow(b,2);
        n/=10;
    }
    s.insert(a);
    if(a==1){
        check = true;
        return;
    }
    if(a==*s.find(a)){
        return;
    }
    happy(a);
}
bool isHappy(int n){
    if(n==1) return true;
    happy(n);
    return check;
}
int main(){
    // int n;
    // cin>>n;
    // cout<<isHappy(n)<<endl;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    if(s.find(4)!=s.end()) cout<<true<<endl;
    return 0;
}