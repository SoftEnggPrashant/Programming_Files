#include<bits/stdc++.h>
using namespace std;

int maxabu(vector<int> &A){
    int n = A.size();
    int maxans =0;
    int max1 =INT_MIN, max2 =INT_MIN , min1 = INT_MAX , min2 = INT_MAX;
    for(auto i=0; i<n; ++i){
        max1 = max(max1,A[i]-i);
        max2 = max(max2,A[i]+i);
        min1 = min(min1,A[i]-i);
        min2 = min(min2,A[i]+i);
        maxans = max(max1-min1,max2-min2);

    }
    return maxans;
}
int main(){
    vector<int> a{-70, -64, -6, -56, 64, 61, -57, 16, 48, -98 };
    int b= maxabu(a);
    cout<<b<<endl;

    return 0;
}