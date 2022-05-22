#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &nums){

    do{
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(nums.begin(),nums.end()));
}
int main(){
    vector<int> vect = {1,2,3};
    permutation(vect);
    return 0;
}