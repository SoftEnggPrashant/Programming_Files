#include<bits/stdc++.h>
using namespace std;

void zigZag(vector<vector<int> > v,int row,int col){

    for(int line = 1; line <= (row+col)-1; line++){

        int s_col = max(0,line-row);

        int count = min(line,min(col-s_col,row));

        for(int j = 0; j<count; j++){
            cout<<v[min(row,line)-1-j][s_col+j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int row,col;
    cin>>row>>col;

    vector<vector<int> > v(row,vector<int>(col));

    for(int i = 0;i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>v[i][j];
        }
    }

    zigZag(v,row,col);

    return 0;

}