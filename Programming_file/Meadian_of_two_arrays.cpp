#include<bits/stdc++.h>
using namespace std;
double MofT(vector<int> a,vector<int>b){
      vector<int> v;
      v=a;
      v=b;
      sort(v.begin(),v.end());
      int n =v.size();
      double ans = 0;
      if(n%2==0){
          int a = n/2;
          ans = (v[a-1]+v[a])/2;
      }
      else{
          int idx = n/2;
          ans = v[idx];
      }
      return ans;
}
int main(){

    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(3);
    b.push_back(2);
    b.push_back(4);
   // cout<<MofT(a,b)<<endl;
    cout<<a.size()<<endl;
    vector<int>v1;
    v1=a;
    v1=b;
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    return 0;
}