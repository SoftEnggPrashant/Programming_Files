#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


void NegativeBinary(int n){
    string s = "";
    string twos = "";
    for(int i=0;i<32;i++){
        int bit = n&1;
        s.push_back((bit^1)+'0');
        n = n>>1;
    }

    twos = s;

    for(int i=0;i<s.size();i++){
        if(s[i]==1){
            twos[i] = 0;
        }
        else{
            twos[i] = 1;
            break;
        }
    }

    reverse(s.begin(),s.end());
    reverse(twos.begin(),twos.end());

    cout<<s<<endl;
    cout<<twos<<endl;
}

void BinarytoDecimal(int n){

    int ans = 0;
    int i=0;
    while(n != 0){

        int bit = n%10;
        ans = bit * pow(2,i++) + ans;

        n = n/10;
    }
    cout<<ans<<endl;
}

int main(){

    int n,i=0,ans=0;
    int bin;
    cin>>n;
    bin = n;

    while(n!=0){

        int digit = n&1;
        ans = (digit * pow(10,i++))+ans;
        n = n>>1;
    }

    cout<<ans<<endl;

    // BinarytoDecimal(bin);
    NegativeBinary(bin);
    return 0;
}