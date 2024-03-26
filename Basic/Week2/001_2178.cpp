#include<bits/stdc++.h>
using namespace std;

const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};
int n,m,sy,sx,ey,ex;
int visited[104][104],a[104][104];

void bfs(int y,int x){
	visited[y][x]=1;
	queue<pair<int,int>> q;
	q.push({y,x});
	
	while(q.size()){
		tie(y,x) = q.front(); q.pop(); //new y,x
		
		for(int i=0;i<4;i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
		
			if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
			if(a[ny][nx] && !visited[ny][nx]){
				visited[ny][nx] = visited[y][x]+1;
				q.push({ny,nx});
			}
		}
	}
	
	return;
}

int main(){	
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%1d",&a[i][j]);
	
	bfs(0,0);
	
	cout<<visited[n-1][m-1];
		
	return 0;
}
