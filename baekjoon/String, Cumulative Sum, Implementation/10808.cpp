#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

int cnt[26];
string s;

int main(){
	
	cin>>s;
	
	for(char a : s) cnt[a-'a']++;
	
	for(int i : cnt) cout<<i<<' ';

	
	return 0;
}
