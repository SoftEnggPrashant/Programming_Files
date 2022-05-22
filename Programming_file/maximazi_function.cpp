#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int T;
    cin>>T;
    while(T--){
        long long int N;
        cin>>N;
        long long int arr[N];
        long long int sum=0;
        for(long long int i=0;i< N;i++){
            cin>>arr[i];
        }
        for(long long int j=0;j< N-1;j++){
            long long int w = arr[j]-arr[j+1];
            long long int a=llabs(w);
             sum=sum+a;
        }
        long long int q = arr[N-1]-arr[0];
        long long int b=llabs(q);
        sum=sum+b;
        cout<<sum<<endl;
        
    }
    return 0;
}