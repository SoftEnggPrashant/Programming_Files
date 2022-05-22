#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> t;
        int inn;
        cin>>inn;
        for(int j=0;j<inn;j++){
            int ele;
            cin>>ele;
            t.push_back(ele);
        }
        v.push_back(t);
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }

    return 0;
}