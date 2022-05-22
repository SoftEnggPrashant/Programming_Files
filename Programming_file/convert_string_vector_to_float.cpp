#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s = {"0.009400", "0.699024", "1.130923", "2.774986", "0.898402", "2.967598", "1.595539", "1.031851", "1.170484", "1.800949", "2.494482", "2.452480", "2.722951", "3.640850", "0.737449", "1.838631", "3.141510", "1.924829", "2.348326", "3.038969", "2.975395", "2.311456", "0.109252", "1.211996" };
    vector<float> f;
    for(int i=0;i<s.size();i++){
        f.push_back(stof(s[i]));
    }
    sort(f.begin(),f.end());
    for(auto i : f){
        cout<< i<<" ";
    }
    cout<<endl;
    float finalsum =0,sum =0;
    int n = f.size();
    for(int i=0;i< n-1;i++){
        sum += f[i]+f[i+1]+f[i+2];
         if(sum > 1 && sum < 2){
                //return true;
                finalsum = sum;
                break;
            }
    }
    cout<<endl;
    cout<<finalsum<<endl;
    return 0;
}