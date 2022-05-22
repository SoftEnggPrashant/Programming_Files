#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        long int n;
        cin>>n;
        int d;
        vector<int>v;
        while (n!=0)            
        {
            d=n%10;
            v.push_back(d);
            n=n/10;
        }
        int i = 0;
        while(i < v.size())
        {
            if(v[i]!=0)
            {
                cout<<v[i];
                i++;
            }
            else
            {
                if(v[0]==0){
                    i++;
                }
                for (int j = i-1; j>=0; j--)
                {
                    /* code */
                   if(v[j]!=0){
                       cout<<v[i];
                       i++;
                   }  
                }
                 if(v[i]==0){
                     i++;
                 }       
            }
        }
        cout<<endl;
    }
    return 0;
}