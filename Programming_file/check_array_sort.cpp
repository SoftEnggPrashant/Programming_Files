#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool pravearr = check(arr+1,n-1);
    return (arr[0]<arr[1]&& pravearr);
}
int main(){
    int arr[] = {1,2,3,8,4,5,6};
    cout<<check(arr,6)<<endl;
    return 0;
}