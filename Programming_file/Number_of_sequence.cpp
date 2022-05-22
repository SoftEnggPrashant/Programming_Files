#include<bits/stdc++.h>
using namespace std;
void incre(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    incre(n-1);
    cout<<n<<endl;
}
void decre(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    decre(n-1);
}
int main(){
    int n;
    cin>>n;
    incre(n);
    cout<<endl;
    decre(n);
    return 0;
}