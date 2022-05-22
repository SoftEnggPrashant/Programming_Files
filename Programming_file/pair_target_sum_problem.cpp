#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low =0,hight=n-1;
    while(low<hight){
        if(a[low]+a[hight]==k){
            cout<<low <<"  "<<hight<<endl;
            return true;
        }
        else if(a[low]+a[hight]>k){
            hight--;
        }
        else{
            low++;
        }
        if(low ==hight){
            return false;
        }
    }
      
    return 0;
}