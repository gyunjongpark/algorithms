#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){ //최대공약수	 
	if(a==0) return b;
	return gcd(b%a,a);
}

int lcm(int a,int b){ //최소공배수	 
	return (a*b) / gcd(a,b);
}

bool isPrime(int n){
	if(n<=1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	
	for(int i=3;i*i<=n;i++) if(n%i==0) return 0;
	
	return 1;
}

void rotate_left(vector<vector<int>> &key){
	int n = key.size();
	int m = key[0].size();
	vector<vector<int>> temp(m,vector<int>(n,0));
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			temp[i][j] = key[j][m-i-1];
		}
	}
	key.resize(m);
	key[0].resize(n);
	
	key=temp;
	return;
}

void rotate_right(vector<vector<int>> &key){
	int n = key.size();
	int m = key[0].size();
	vector<vector<int>> temp(m,vector<int>(n,0));
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			temp[i][j] = key[n-j-1][i];
		}
	}
	key.resize(m);
	key[0].resize(n);
	
	key=temp;
	return;
}
