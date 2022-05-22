#include<bits/stdc++.h>
using namespace std;
int main(){

int T;
cin>>T;
  while(T--){
      double quantity,price,per;
      double Ex;
      cin>>quantity>>price;
      if(quantity>1000){
          per = quantity*10/100;
          quantity -=per;
           Ex = quantity*price;
           cout<<fixed<<setprecision(6)<<Ex<<endl;
      }
      else{
          Ex = quantity*price;
          cout<<fixed<<setprecision(6)<<Ex<<endl;
      }
  }

    return 0;
}