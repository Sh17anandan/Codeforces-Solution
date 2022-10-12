#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	int n;
	cin>>n;
	int sum=0; string s;
	while(n--){
		cin>>s;
		if(s=="Tetrahedron") sum+=4;
		else if(s=="Cube") sum+=6;
		else if(s=="Octahedron") sum+=8;
		else if(s=="Dodecahedron") sum+=12;
		else if(s=="Icosahedron") sum+=20;
	}
	cout<<sum;
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}