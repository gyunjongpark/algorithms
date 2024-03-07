#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> v = {{1, 2, 3,100}, {4, 5, 6,200}, {7, 8, 9,300}};
int b[3][4];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			b[j][i] = v[i][j];
		}
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			cout << b[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}
