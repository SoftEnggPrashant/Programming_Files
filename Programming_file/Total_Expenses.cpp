#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        float q,p;
        float Ex;
        cin>>q>>p;
        if(q>1000){
            float per = (q*10)/100;
            q=q-per;
            Ex=q*p;
        }
        else{
            Ex=q*p;
        }
        cout<<Ex<<endl;
    }
}