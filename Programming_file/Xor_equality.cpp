#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
      int N,r,a,b,result;
      cin>>N;
      r=pow(2,N)-1;
      for(int i=0;i<r;i++){
          a=i^(i+1);
          b=(i+2)^(i+3);
          if(a==b){
            result= a;
          }
      }
      cout<<result<<endl;
    }
    return 0;
}