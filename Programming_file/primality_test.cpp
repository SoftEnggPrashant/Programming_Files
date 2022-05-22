#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int no;
        cin>>no;
        int count=0;
        for (int i = 2; i <= pow(no,0.5); i++)
        {
            if(no%i==0){
                count++;
            }
        }
        if(count==0&&no!=1){
        cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
    
}