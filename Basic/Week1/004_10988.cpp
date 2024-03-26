#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	cin>>s;
	string s1=s;
	reverse(s.begin(),s.end());

	if(s==s1) cout<<1;
	else cout<<0;
	
	return 0;
}
