#include<bits/stdc++.h>
using namespace std;

const int N = 10e3;
int graph[N][N];

int main(){

    int N,M;
    cout<<"Enter the no. of vertices and edges "<<endl;
    cin>>N>>M;

    for(int i=0;i<N;i++){
        int first,second;
        cin>>first>>second;

        graph[first][second] = 1;
        graph[second][first] = 1;

    }


    for(int i=1;i<N+1;i++){
        for(int j =1;j<N+1;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}