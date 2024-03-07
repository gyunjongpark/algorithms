
/* Q2
#include<bits/stdc++.h>
using namespace std;

const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};
int n,m,sy,sx,ey,ex;
int visited[104][104];
bool a[104][104];

void bfs(int y,int x){
	visited[y][x]=1;
	queue<pair<int,int>> q;
	q.push({y,x});
	
	while(q.size()){
		tie(y,x) = q.front(); q.pop();
		
		for(int i=0;i<4;i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
			if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
			if(a[ny][nx] && !visited[ny][nx]){
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ny,nx});
			}
		}
	}
	return;
}

int main(){
	cin>>n>>m;
	cin>>sy>>sx;
	cin>>ey>>ex;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
			
	bfs(sy,sx);
	
	cout<<visited[ey][ex];
	return 0;
}
*/

/* bfs

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int visited[100];
int nodeList[]={10,12,14,16,18,20,22,24};

void bfs(int here){
	visited[here]=1;
	queue<int> q;
	q.push(here);
	
	while(q.size()){
		int here = q.front(); q.pop();
		
		for(int there : adj[here]){
			if(!visited[there]){
				visited[there] = visited[here] + 1;
				q.push(there);
			}
		}
	}
	
	return;
}
int main(){
    adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);
    
    adj[12].push_back(18);
    adj[12].push_back(20);


    adj[20].push_back(22);
    adj[20].push_back(24);
    
    bfs(10);
    for(int i : nodeList){
        cout << i << " : " << visited[i] << '\n';
    }
    cout << "10번으로부터 24번까지 최단거리는 : " << visited[24] - 1 << '\n';
    return 0; 
}
*/

/* Q1

#include<bits/stdc++.h>
using namespace std;

const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};
bool a[104][104],visited[104][104];
int n,m,y,x,ret;

void dfs(int y,int x){
	visited[y][x]=1;
	
	for(int i=0;i<4;i++){
		int ny = y+dy[i];
		int nx = x+dx[i];
		
		if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
		if(a[ny][nx] && !visited[ny][nx]) dfs(ny,nx);
	}
	
	return;
}

int main(){
	
	cin>>n>>m;;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j] && !visited[i][j]){
				ret++; dfs(i,j);
			}

	cout<<ret;
	
	return 0;
}
*/

/* map

#include<bits/stdc++.h>
using namespace std;

const int n=3;
const int dy[]={-1,0,1,0};
const int dx[]={0,1,0,-1};
int a[n][n],visited[n][n];

void go(int y,int x){
	visited[y][x]=1;
	cout<<y<<' '<<x<<'\n';
	
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(ny<0 || ny>=n || nx<0 || nx>=n) continue; //오버플로 방지	 
		if(a[ny][nx] && !visited[ny][nx]) go(ny,nx);
	}
	return;
}

int main(){
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	
	go(0,0);
	return 0;
}
*/

/* adjacency list

#include<bits/stdc++.h>
using namespace std;

const int n=10;
int visited[n];
vector<int> adj[n];

void go(int here){
	visited[here]=1;
	cout<<here<<'\n';
	
	for(int there : adj[here]){
		if(!visited[there]) go(there);
	}
	return;
}

int main(){
	
	adj[1].push_back(2);
	adj[2].push_back(1);
	
	adj[1].push_back(3);
	adj[3].push_back(1);

	adj[3].push_back(4);
	adj[4].push_back(3);
	
	for(int i=0;i<10;i++)
		if(adj[i].size() && !visited[i]) go(i);
	
	return 0;
}
*/

/* adjacency matrix

#include<bits/stdc++.h>
using namespace std;

const int n=10;
bool visited[n],a[n][n];

void go(int from){
	visited[from]=1;
	cout<<from<<'\n';
	
	for(int i=0;i<10;i++)
		if(a[from][i] && !visited[i]) go(i);
	
	return;
}

int main(){
	
	a[1][2]=1; a[1][3]=1; a[3][4]=1;
	a[2][1]=1; a[3][1]=1; a[4][3]=1;
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			if(a[i][j] && !visited[i]) go(i);
	
	return 0;
}
*/



