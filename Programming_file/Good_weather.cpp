#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int no;
        int a=0;
        int b=0;
        for(int i=0;i<7;i++){
            cin>>no;
            if(no==1) a++;
            else b++;
        }
        if(a>b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}