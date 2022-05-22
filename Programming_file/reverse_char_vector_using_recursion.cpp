#include<bits/stdc++.h>
using namespace std;
void solve(vector<char>& str,int l,int h){
    if(h<=l){
        return;
    }
    swap(str[l],str[h]);
    solve(str,l+1,h-1);
}
int main(){

    vector<char> s = {'h','e','l','l','o','w'};
    int l = 0, h = 5;
    solve(s,l,h);
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}