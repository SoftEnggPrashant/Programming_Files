#include<bits/stdc++.h>
using namespace std;

vector<int> NGT(vector<int> &v){
    vector<int> ans(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]>v[st.top()]){
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()] = -1;
        st.pop();
    }
    return ans;
}
int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> v1 = NGT(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<< (v1[i]==-1 ? -1:v[v1[i]])<<endl;
    }

    return 0;
}