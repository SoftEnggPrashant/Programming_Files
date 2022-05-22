#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int maxans =0;
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        for(int i=0;i<21;i++){
            for(int j=0;j<21;j++){
                for(int k=0;k<21;k++){
                    if(i*a+j*b+k*c<=240){
                        maxans = max(maxans,i*x+j*y+k*z);
                    }
                }
            }
        }
        cout<<maxans<<endl;
    }
    return 0;
}