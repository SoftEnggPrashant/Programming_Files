#include<bits/stdc++.h>
using namespace std;

const int N = 10e5+10;
vector<int> graph[N];
bool visit[N];

void DFS(int vertex){
    //take action after entering the vertex
    if(visit[vertex]) return;
    visit[vertex] = true;
    for(int chield : graph[vertex]){
        //take action on child before entering the child node
        cout<<"vetex "<<vertex <<" child is "<< chield<<endl;
        DFS(chield);
        //take action after exiting the child node
    } 

    // take action on vertex before exiting teh vertex
}

int main(){

    int N,M;
    cout<<"Enter the vertex ans edges "<<endl;
    cin>>N>>M;

    for(int i=0;i<N;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    DFS(1);
    return 0;
}