#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n==1 || n==4)
      return true;
    if(n<4)
      return false;
    if(n%4==0)
       return solve(n-4);
    return false;
}
int main(){
    int n = 16;

    cout<<solve(n)<<endl;

    return 0;
}