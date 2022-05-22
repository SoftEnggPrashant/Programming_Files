#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    long long int lcm(long long int x,long long int y){
        return (x/gcd(x,y)*y);
    }
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        long long int a,b,c,d;
        cin>>a>>b;
         c=gcd(a,b);
         d=lcm(a,b);
         cout<<c<<" "<<d<<endl;
    }
    return 0;
}