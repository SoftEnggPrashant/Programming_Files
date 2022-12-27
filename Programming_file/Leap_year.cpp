#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%4==0){
        if(n%400 == 0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    else{
        if(n%100 == 0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}