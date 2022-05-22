#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, countodd = 0, counteven = 0;
    cin >> T;
    while (T--)
    {
        int sol;
        cin>>sol;
        if(sol%2==0){
            counteven++;
        }
        else
        {
            countodd++;
        }
        
    }
    
     if(counteven>countodd && counteven!=countodd){
         cout<<"READY FOR BATTLE";
     }   
     else
     {
        if(counteven < countodd){
            cout<<"NOT READY";
        }
        else
        {
            if(counteven == countodd){
                cout<<"NOT READY";
            }
        }
        
     }
     
   
    return 0;
}