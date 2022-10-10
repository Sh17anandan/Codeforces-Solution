#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	int n; bool tf=1;
	cin>>n; char x,y,c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1&&j==1)
				cin>>x;
			else if(i==1&&j==2)
				cin>>y;
			else{
				cin>>c;
				if(i==j||j==n-i+1){
					if(c!=x) tf=0;
				}
				else{
					if(c!=y) tf=0;
				}
			}
		}
	}
	if(x==y) cout<<"NO";
	else if(tf==0) cout<<"NO";
	else cout<<"YES";
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}