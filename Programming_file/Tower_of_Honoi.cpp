#include<bits/stdc++.h>
using namespace std;
void towerofhoni(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerofhoni(n-1,src,helper,dest);
    cout<<"move "<<src <<"to"<<dest<<endl;
    towerofhoni(n-1,helper,dest,src);
}
int main(){
    towerofhoni(3,'A','C','B');
}