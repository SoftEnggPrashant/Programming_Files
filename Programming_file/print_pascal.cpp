#include<bits/stdc++.h>
using namespace std;


void solve(vector<vector<long long int >> &ans,int x,int y,int n){
    
    if(x == n){
        return;
    }

    vector<long long int > temp(y+1);
    
    for(int i = 0; i<=y; i++){
        if(i == 0 || i== y){
            temp[i] = 1;
        }
        else{
            temp[i] = ans[x-1][i-1]+ans[x-1][i];
        }
    }
    ans.push_back(temp);
    solve(ans,x+1,y+1,n);
}
void  printPascal(int n) 
{
  // Write your code here.
    
    vector<vector<long long int > > ans;
    solve(ans,0,0,n);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // return ans;
}

int main(){

    
printPascal(5);

    return 0;
}