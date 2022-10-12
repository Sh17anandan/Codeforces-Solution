#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

bool isPrime(int num){
	for(int i=2;i*i<=num;i++)
		if(num%i==0) return 0;
	return 1;
}



void prob(){
	int m,n;
	cin>>n>>m;
	vector<int> v;
	for(int i=2;i<50;i++){
		if(isPrime(i)) v.push_back(i);
	}
	if(m==v[upper_bound(v.begin(),v.end(),n)-v.begin()]) cout<<"YES";
	else cout<<"NO";
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}