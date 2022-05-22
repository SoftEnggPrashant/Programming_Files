#include<bits/stdc++.h>
using namespace std;
void inserT(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<= temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    inserT(v,temp);
    v.push_back(val);
}
void solve(vector<int>&v){
    if(v.size()==1) return;
    int temp = v[v.size()-1];
    v.pop_back();
    solve(v);
    inserT(v,temp);
}
int main(){

    vector<int> v = {4,2,5,3,6,20,9};
    solve(v);
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}