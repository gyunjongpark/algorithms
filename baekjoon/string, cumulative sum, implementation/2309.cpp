#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<int, int> pi;
vector<int> v;
int arr[9];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	int sum=0;
	
	for(int i=0;i<9;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	for(int i=0;i<9;i++)
		for(int j=0;j<i;j++)
			if(sum-arr[i]-arr[j]==100){
				pi.first= i, pi.second = j;
				break;
			}
	
	for(int i=0;i<9;i++){
		if(i == pi.first || i == pi.second) continue;
		v.push_back(arr[i]);
	}
	
	sort(v.begin(),v.end());
	for(int i : v) cout<<i<<'\n';
	return 0;
}
