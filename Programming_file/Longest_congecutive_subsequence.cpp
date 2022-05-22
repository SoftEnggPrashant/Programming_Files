#include<bits/stdc++.h>
using namespace std;
int congecutive(int arr[],int N){

   int count=0;
   sort(arr,arr+N);
   for(int i=0;i<N;i++){
       if(i>0&&arr[i]==arr[i-1]+1){
           count++;
       }
   }
   return count;
}
int main(){
    
    int arr[] = {100,4,200,1,3,2};
    int N=7;
    cout<<congecutive(arr,N)<<endl;

    return 0;
}