#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

void prob(){
	string s;
	cin>>s;
	vector<char> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&i<s.size()-2){
		    if(v.size()!=0){
		        if(v.back()!=' ')
		            v.push_back(' ');
		    }
		    i+=2;
		}
			
		else
		   v.push_back(s[i]);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i];
	   
}

int32_t main(){
	int t=1;
	//cin>>t;
	while(t--) prob(),cout<<endl;
	return 0;
}