#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

	while(cin>>n){
		int cnt=1,a=1;
		
		while(true){
			if(a%n==0){
				cout<<cnt<<'\n';
				break;
			}
			else{
				a = a*10+1;
				cnt++;
				a%=n;
			}
		}
	}
	
	return 0;
}
