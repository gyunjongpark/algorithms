#include<bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	vector<int> arr;
	int n,k;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		arr.push_back(k);
	}
	
	sort(arr.begin(),arr.end());
	arr.erase(unique(arr.begin(),arr.end()),arr.end());
	
	for(int i : arr) cout<<i;
	
	return 0;
}
