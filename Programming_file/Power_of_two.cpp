#include<iostream>
using namespace std;
bool powerOfTwo(int n){
    if(n==0 || n==2){
        return true;
    }
    if(n==1 || n&1) return false;
    return powerOfTwo(n/2);
}
int main(){

    int n;
    cin>>n;
    // if((n&(n-1))==0)
    if(powerOfTwo(n))
        cout<<"power of two"<<endl;
    else
        cout<<"Not power of two"<<endl;

    return 0;
}