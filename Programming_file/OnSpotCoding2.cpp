#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> mp;
    mp['A'] = 65;
    mp['B'] = 67;
    mp['C'] = 68;
    mp['D'] = 69;mp['E'] = 70;mp['F'] = 71;mp['G'] = 72;mp['H'] = 73;mp['I'] = 74;mp['J'] = 75; mp['K'] = 76; mp['M'] = 77; mp['N'] = 78; mp['O'] = 79; mp['P'] = 80; mp['Q'] = 81;
    mp['R'] = 82; mp['S'] = 83; mp['T'] = 84; mp['U'] = 85;mp['V'] = 86;mp['W'] = 87;mp['X'] = 88; mp['Y'] = 89;mp['Z'] = 90;
    string st;
    bool flag = false;
    vector<string> v;
    getline(cin,st);

    for(int i=0;i<st.size();i++){
        if(st[i] == '.' || st[i] == ',' || st[i]== '?' || st[i] == '!'){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Inavlid input"<<endl;
    }
    else{
        string temp;
        for(int i=0;i<st.size();i++){
            temp+=st[i];
            if(st[i] == ' '){
                v.push_back(temp);
                temp="";
            }
        }
        v.push_back(temp);
    }
    string str = "";
    int aci;
    for(int i=0;i<v.size();i++){
        str = v[i];
        aci = 0;
        for(int j=0;j<str.size();j++){
            aci += mp[str[j]];
        }
        cout<<str<<" "<<aci<<endl;
    }
    sort(v.begin(),v.end());

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}