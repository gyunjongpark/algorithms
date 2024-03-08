#include<bits/stdc++.h>
using namespace std;

int n;
string pre,suf,s,str;

int main(){
	
	cin>>n>>s;
	
	pre=s.substr(0,s.find("*")); suf=s.substr(s.find("*")+1);
	
	for(int i=0;i<n;i++){
		cin>>str;
		
		if(pre.size()+suf.size()>str.size()) cout<<"NE\n";
		else{
			if(pre == str.substr(0,pre.size()) && suf == str.substr(str.size()-suf.size()))
				cout<<"DA\n";
			else cout<<"NE\n";
		}
	}
	
	return 0;
}
