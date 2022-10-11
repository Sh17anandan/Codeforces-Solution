#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	int n,m,a;
	cin>>n>>m>>a;
	int sum=0;
	sum=ceil((double)n/a)*ceil((double)m/a);
	cout<<sum;
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}