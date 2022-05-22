#include<bits/stdc++.h>
using namespace std;

vector<int> findPos(vector<int> nums,int target){
    int l = lower_bound(nums.begin() , nums.end(), target) - nums.begin();
    int u = upper_bound(nums.begin() , nums.end(), target) - nums.begin();

    vector<int>v;
    
    if(l==nums.size() || nums[l]!=target){
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }

    v.push_back(l);
    v.push_back(u-1);
    return v;

}

int main(){

    int n;
    cin>>n;
    vector<int> ve;
    for(int i=0;i<=n;i++){
        int a;
        cin>>a;
        ve.push_back(a);
    }
    int target;
    cin>>target;
    vector<int> v = findPos(ve,target);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}