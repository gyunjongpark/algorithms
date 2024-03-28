#include<iostream>
#include<algorithm>
using namespace std;

int n,ret,a[15],b[15];

int solve(int day){
	if(day>n) return -987654321;
	if(day==n) return 0;

	ret = max(solve(day+1),solve(day+a[day])+b[day]);
	return ret;
}

int main(){
	
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	
	int ret=solve(0);
	
	cout<<ret;
	
	return 0;
}
