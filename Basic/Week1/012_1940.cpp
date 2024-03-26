#include<iostream>
#include<stdio.h>
using namespace std;

int n,m,a[15004];
int cnt;
int main(){
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	if(m>200000) cout<<0;
	
	else{
		for(int i=0;i<n;i++)
			for(int j=0;j<i;j++)
				if(a[i]+a[j]==m) cnt++;
	
		cout<<cnt;
  }
  
	return 0;
}
