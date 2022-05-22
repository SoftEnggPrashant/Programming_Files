#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum =0;
    cout<<"enter the no";
    cin>>n;
   for(int i=2;i<n;i++){
      for(int j=2;j<i;j++){
          if(i%j==0)break;
          else if(i==j+1)cout<<i<<" ";
      }
   }
    cout<<sum<<endl;
    return 0;
}