#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &b){
     vector<unordered_set<char>> r(9),c(9),block(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]!='.'){
                    if(r[i].count(b[i][j]) || c[j].count(b[i][j]) || block[(i/3)*3+(j/3)].count(b[i][j])) return false;
                    r[i].insert(b[i][j]);
                    c[j].insert(b[i][j]);
                    block[(i/3)*3+(j/3)].insert(b[i][j]);
                }
            }
        }
        return true;
}
int main(){
    
    vector<vector<char>> s={{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},
      {".","6",".",".",".",".","2","8","."},
      {".",".",".","4","1","9",".",".","5"},
      {".",".",".",".","8",".",".","7","9"}
      };

    cout<<isValid(s)<<endl;
    return 0;
}