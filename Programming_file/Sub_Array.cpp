#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int sub=0,maxSum=0;
     for(int i=0;i<n;i++){
         sub=0;
         for(int j=i;j<n;j++){
             sub+=a[j];
             maxSum = max(maxSum,sub);
         }
     }
     cout<<maxSum<<endl;
     
    return 0;
}