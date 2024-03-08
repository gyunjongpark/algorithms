#include<bits/stdc++.h>
using namespace std;

int t,n;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>t;
	
	for(int i=0;i<t;i++){
		cin>>n;
		
		int ret=1;
		map<string,int> mp;
		string a,b;
		
		for(int j=0;j<n;j++){
			cin>>a>>b;
			mp[b]++;
		}
		
		for(auto c : mp) ret*=(c.second+1);
		
		ret--;
		cout<<ret<<'\n';
	}
	
	return 0;
}
