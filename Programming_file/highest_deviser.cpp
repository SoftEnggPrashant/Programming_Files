#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum=0,h;
    for(int i=1;i<=10;i++){
        if(i>=sum){
             sum=i;
            if(N%sum==0){
               h=sum;
            }
        }
    }
    cout<<h<<endl;
}