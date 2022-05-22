#include<bits/stdc++.h>
using namespace std;
void vprint(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    //vector of pairs 
    int N;
    cin>>N;
    vector<pair<int,int>> v;
    for(int i=0;i<N;i++){
        int  x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    swap(v[0],v[2]);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    // vector of vector and 2D vector s

    vector<vector<int>> v1;
    for(int i=0;i<4;i++){
        vector<int> temp;
        for(int j=0;j<4;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v1.push_back(temp);
    }
    vprint(v1);

    return 0;
}