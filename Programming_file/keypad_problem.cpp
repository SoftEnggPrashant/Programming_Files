#include<iostream>
#include<vector>
using namespace std;

void solve(string str,string output,int index,vector<string> &ans,string map[]){

    if(index >= str.size()){
        ans.push_back(output);
        return;
    }
    int number = str[index]-'0';
    string st = map[number];

    for(int i=0;i<st.size();i++){
        output.push_back(st[i]);
        // cout<<output<<" ";
        solve(str,output,index+1,ans,map);
        output.pop_back();
    }
}

int main(){
    
    string no;
    cin>>no;

    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector<string> ans;
    string ouput = "";
    int index = 0;
    solve(no,ouput,index,ans,map);

    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;



    return 0;
}