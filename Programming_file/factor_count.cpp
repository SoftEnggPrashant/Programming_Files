#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int no,sum=0;
        cin>>no;
        while(no!=0){
        int v=no%10;
        if(v!=0){
            if(v%v==0){
                sum++;
            }
        }
        no=no/10;
        }    
        cout<<sum<<endl;
    }
    return 0;
}