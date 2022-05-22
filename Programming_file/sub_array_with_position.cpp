#include<bits/stdc++.h>
using namespace std;
int subArray(int arr[],int n){

    int i=0,j=0;
    int posl=0,posr=0;
    int maxsum =0;
    int sum=0;
    while(i<n){
        if(j>=i && j<n){
            sum += arr[j];
            if(sum > maxsum){
                maxsum = sum;
                posl = i+1;
                posr = j+1;
            }
            j++;
        }
        else{
            i++;
            j=0;
            j=i;
            sum=0;
        }
    }
    cout<<posl<<" "<<posr<<endl;
    return maxsum;
}
int main(){
    int arr[] = {-4,-1,-1,7,8,5};
    cout<<subArray(arr,6)<<endl;
    return 0;
}