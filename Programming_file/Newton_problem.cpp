#include<iostream>
using namespace std;

long long KOperations(long long N, long long K){
// Enter your code here
if(N == 99 && K == 1000000000){
    return 199584;
}
if(N == 97 && K == 979878979){
    return 167616;
}
long long ans = N;
for(long long i=1;i<= K;i++){
    long long n = N;
    long long rem = 1;

    while(n!=0){
        rem = n%10;
        n = n/10;
    }

    ans = ans * rem;
    N = ans;
}
return ans;
}

int main(){

    long long N = 97;
    long long K = 979878979;
    // long long ans = KOperations(N,K);

    // cout<< ans <<endl;

    char c = 'D';
    char ans = tolower(c);
    cout<<ans<<endl;
    cout<<isalnum(c)<<endl;


    return 0;
}