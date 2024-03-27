#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t,temp,b,c;
int a[1000004];
ll cnt;

int main(){	
	cin>>t;
	
	cnt+=t;
	
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	cin>>b>>c;
	
	for(int i=0;i<t;i++){
		a[i]-=b;
    if (a[i] <= 0)continue; 
        
		cnt+=(a[i]/c);
		if(a[i]%c) cnt++;
	}
	cout<<cnt;
  
	return 0;
}
