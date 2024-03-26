#include<bits/stdc++.h>
using namespace std;

int a,b,c,ret,cnt[104];
int main(){
	
	cin>>a>>b>>c;
	
	for(int i=0;i<3;i++){
	 	int d,e;
	 	cin>>d>>e;
	 	
	 	for(int i=d;i<e;i++) cnt[i]++;
	}
	
	for(int i=1;i<=100;i++){
		if(cnt[i]==1) ret+=a;
		else if(cnt[i]==2) ret+=2*b;
		else if(cnt[i]==3) ret+=3*c;
	}
	cout<<ret;
	
	return 0;
}
