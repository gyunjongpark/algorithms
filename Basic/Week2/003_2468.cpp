#include<bits/stdc++.h>
using namespace std;

int visited[104][104],a[104][104];
int n,ret=1;
const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};

void dfs(int y,int x,int k){
	visited[y][x]=1;
	
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0 || ny>=n || nx<0 || nx>=n) continue;
		if(a[ny][nx]>k && !visited[ny][nx]) dfs(ny,nx,k);
	}
	return;
}

int main(){
	cin>>n;
	int cnt=0;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	
	for(int k=1;k<=100;k++){
		
		int cnt=0;
		fill(&visited[0][0],&visited[101][101],0);
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(a[i][j]>k && !visited[i][j]){
					cnt++; dfs(i,j,k);
				}
		ret = max(ret,cnt);
	}
		
	cout<<ret;
	return 0;
}
