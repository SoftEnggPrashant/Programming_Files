#include<bits/stdc++.h>
using namespace std;
void printNumber(int n){
    if(n==0) return;
    printNumber(n-1);
    cout<<n<<endl;
}
int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    // printNumber(n);
    // cout<<factorial(n)<<endl;
    vector<int> v = {1,2,3,4,5,6,7};
    
    return 0;
}