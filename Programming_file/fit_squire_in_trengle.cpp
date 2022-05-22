#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int N;
	cin>>N;
	N/=2;
	cout<<(N*(N-1))/2<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
