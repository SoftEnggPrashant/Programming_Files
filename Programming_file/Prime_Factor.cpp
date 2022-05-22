#include<bits/stdc++.h>
using namespace std;
void primefactor(int n){
    int sfm[n+1]={0};
    for(int i=2;i<=n;i++){
        sfm[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(sfm[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(sfm[j]==j){
                    sfm[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<sfm[n]<<" ";
        n=n/sfm[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
    cout<<endl;
    return 0;
}