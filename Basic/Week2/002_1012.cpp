#include<iostream>
using namespace std;

int t,n,m,k,y,x;
bool visited[54][54],a[54][54];
const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};

void dfs(int y,int x){
	visited[y][x]=1;
	
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		
		if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
		if(a[ny][nx]==1 && !visited[ny][nx]) dfs(ny,nx);
	}
	return;
}

int main(){
	cin>>t;
	
	while(t--){
		cin>>m>>n>>k;
		
		fill(&a[0][0],&a[51][51],0);
		fill(&visited[0][0],&visited[51][51],0);
		
		while(k--){
			cin>>x>>y;
			a[y][x]=1;
		}
		int ret=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]==1 && !visited[i][j]){
					ret++;
					dfs(i,j);
				}
				
		cout<<ret<<'\n';
	}
	
	return 0;
}
