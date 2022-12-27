#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr;
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i]*arr[i];
    }
    
    int sq = sum/n;

    cout<<sqrt(sq)<<setprecision(8)<<endl;

    return 0;
}