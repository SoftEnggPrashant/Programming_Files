#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>&v,int target){
 vector<int> tmp;
 for(int i=0;i<v.size();i++){
     for(int j=i+1;j<v.size();j++){
         if(v[i]+v[j]==target){
             tmp.push_back(i+1);
             tmp.push_back(j+1);
             break;
         }
     }
 }
 return tmp;
}
int main(){
    vector<int> v= {-1,0};
    vector<int> v1;
    int target = -1;
    v1 = solve(v,target);
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}