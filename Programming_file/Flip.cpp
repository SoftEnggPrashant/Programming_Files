#include<bits/stdc++.h>
using namespace std;
int posi(string s){
    vector<int>ans;
    int l = s.length();
    int v[l]={0};
    for(int i=0;i<l;i++){
        if(s[i]=='1'){
            v[i] = -1;
        }
        else{
        v[i] = 1;
        }
    }
    int lef=0,r=0,maxsum=0;
    int posl=0,posr=0;
    for(int i=0;i<l;i++){
        int sum=0;
        for(int j=i;j<l;j++){
            sum += v[j];
            if(maxsum < sum){
                maxsum = sum;
                posl = i+1;
                posr = j+1;
            }
        }
    }
    ans.push_back(posl);
    ans.push_back(posr);
    cout<<posl<<" "<<posr<<endl;
    return maxsum;
    //return ans;
}
int main(){
    cout<<posi("11100100")<<endl;
    return 0;
}