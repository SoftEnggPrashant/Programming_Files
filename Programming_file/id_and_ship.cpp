#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        char A;
        cin>>A;
        if(A=='B'||A=='b'){
            cout<<"BattleShip"<<endl;
        }
        if(A=='C'||A=='c'){
            cout<<"Cruiser"<<endl;
        }
        if(A=='D'||A=='d'){
            cout<<"Destroyer"<<endl;
        }
        if(A=='F'||A=='f'){
            cout<<"Frigate"<<endl;
        }
    }
    
}