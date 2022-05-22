#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v = {1,1,2};
    // for(int i=0;i<N;i++){
    //     cin>> v[i];
    // }
    // vector<int> :: iterator it = v.begin();
    // *it = -1;
    // cout<<*it<<endl;
    set<int> st;
    for(auto it = v.begin();it!=v.end();++it){
        st.insert(*it);
    }
    v.clear();
    for(auto it = st.begin();it!=st.end();++it){
        v.push_back(*it);
    }
    for(auto it = v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    
    return 0;
}