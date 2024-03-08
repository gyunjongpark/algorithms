#include<bits/stdc++.h> 
using namespace std;

int a[9],sum=0;
pair<int,int> ret;
vector<int> v;

int main(){
	
	for(int i=0;i<9;i++){
		cin>>a[i]; sum+=a[i];
	}
	
	for(int i=0;i<9;i++)
		for(int j=0;j<i;j++)
			if(sum-a[i]-a[j] == 100){
				ret = {i,j}; break;
			}
				
	
	for(int i=0;i<9;i++){
		if(ret.first == i || ret.second == i) continue;
		v.push_back(a[i]);
	}
	
	sort(v.begin(),v.end());
	
	for(int i : v) cout<<i<<'\n';
	
	return 0;
}
