#include<bits/stdc++.h>
using namespace std;

int t;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		
		stack<char> stk;
		
		for(char a : s){
			if(!stk.size()) stk.push(a);
			else{
				if(stk.top()=='(' && a==')') stk.pop();
				else stk.push(a);
			}
		}
		
		if(stk.size()) cout<<"NO\n";
		else cout<<"YES\n";
	}
			
			
	return 0;
}
