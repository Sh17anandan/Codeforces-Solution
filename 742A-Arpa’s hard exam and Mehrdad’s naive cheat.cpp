#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	int n;
	cin>>n;
	if(n==0) cout<<1;
	else if(n%4==0) cout<<6;
	else if(n%4==1) cout<<8;
	else if(n%4==2) cout<<4;
	else if(n%4==3) cout<<2;
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}