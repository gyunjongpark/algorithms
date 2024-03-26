#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		int ret=1,n;
		cin>>n;
		string a,b;
		map<string, int> mp;
    
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
