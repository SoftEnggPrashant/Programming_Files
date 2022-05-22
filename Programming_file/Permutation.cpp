#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums,vector<vector<int>> &ans,int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        solve(nums,ans,idx+1);
        swap(nums[i],nums[idx]);
    }
}
vector<vector<int>> permutation(vector<int> &nums){
    vector<vector<int>> ans;
    solve(nums,ans,0);
    return ans;
}
int main(){
    vector<int> v = {1,2,3};
    vector<vector<int>>ans = permutation(v);
    for(auto i : ans){
        for(auto ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    return 0;
}