#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ret;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		stack<char> stk;
		
		for(char c : s){
			if(stk.size() && c==stk.top()) stk.pop();
			else stk.push(c);		
		}
    
		if(stk.size()==0) ret++;
	}
	
	cout<<ret;
		
	return 0;
}
