#include<bits/stdc++.h> 
using namespace std; 

int cnt=0;
int n,m,a[15001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	if(m>200000) cout<<0<<'\n';
	
	else{
		for(int i=0;i<n;i++)
			for(int j=0;j<i;j++)
				if(a[i]+a[j]==m) cnt++;

		cout<<cnt<<'\n';
	}

	return 0;
}
