#include<bits/stdc++.h>
using namespace std;

int n,cnt[30];
string s,ret;

int main(){
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s;
		cnt[s[0]-'a']++;
	}

	for(int i=0;i<26;i++)
		if(cnt[i]>=5) ret+=char(i+'a');
	
	if(ret.size()) cout<<ret;
	else cout<<"PREDAJA";
	
	return 0;
}
