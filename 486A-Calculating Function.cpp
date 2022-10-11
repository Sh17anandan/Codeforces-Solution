#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	int n;
	cin>>n;
	if(n%2) cout<<(-1)*((n+1)/2);
	else cout<<n/2;
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}