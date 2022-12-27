#include<iostream>
using namespace std;

int arrSum(int *arr,int size){

    if(size == 0)
        return 0;

    return arr[0] + arrSum(arr+1,size-1);
}

void arraySum(int *arr,int size,int &sum){

    if(size == 0)
        return;

    sum += arr[0];
    arraySum(arr+1,size-1,sum);
}

int main(){

    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    arraySum(arr,n,sum);

    cout<<sum<<endl;

    int ans =  arrSum(arr,n);

    cout<<ans<<endl;

    return 0;
}