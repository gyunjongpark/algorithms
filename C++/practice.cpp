#include<bits/stdc++.h>
using namespace std;
#define y1 aa

string s;
char a[101][101];

string quad(int y,int x,int size){
	if(size==1) return string a[y][x];
	
	char b = a[y][x];
}
int main(){
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			a[i][j]=s[j];
		}		
	}
	
	cout<<quad(0,0,n)<<'\n';
	
	return 0;
}
