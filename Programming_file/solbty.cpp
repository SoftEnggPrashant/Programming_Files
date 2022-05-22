#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
      int x,a,b;
      cin>>x>>a>>b;
      int sul;
      sul = a+(100-x)*b;
      sul*= 10;
      cout<<sul<<endl;
    }
    return 0;
}
