#include<bits/stdc++.h>
using namespace std;
// very accurate as compare to kidan's algo
int maxSumOfArray(int *a,int n){
    int maxSum = a[0];
    int curr_sum = a[0];
    for(int i=1;i<n;i++){
        curr_sum = max(a[i],curr_sum+a[i]);
        maxSum = max(maxSum,curr_sum);
    }
    return maxSum;
}
// less accurate as compare to above algo
int kidansAlgo(int *a,int n){
    int currentsum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum<0){
            currentsum=0;
        }
        mx= max(mx,currentsum);
    }
    return mx;
}
int main(){

    int n=5;
    int a[] = {1,2,3,-2,5};

    cout<<kidansAlgo(a,n)<<endl;
    cout<<maxSumOfArray(a,n)<<endl;
    
    return 0;
}