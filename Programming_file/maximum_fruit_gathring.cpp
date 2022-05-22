#include<bits/stdc++.h>
using namespace std;

int maxFruit(int arr[],int n,int m){
    int maxSum = INT_MIN;
    int sum;
    for(int i=0;i<(n-m)+1;i++){
        sum = 0;
        for(int j=i;j<m+i;j++){
            sum+=arr[j];
        }
        maxSum = max(maxSum,sum);
        cout<<maxSum<<" ";
    }
    return maxSum;
}
   
int main(){

    int arr[] = {246, 608, 2285, 396, 1722, 2346, 277, 2061, 1337, 2959, 2449, 240, 633, 1822, 2676};
    int n = 15;
    int m = 12;
    cout<<maxFruit(arr,n,m)<<endl;
    //19362
    return 0;
}