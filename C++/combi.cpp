#include<bits/stdc++.h>
using namespace std;

int n,k;
//n = 배열의 크기, k는 뽑으려는 개수	 
int a[5] = {7,2,3,4,5};

void print(vector<int> b){ //단순 출력함수 
	for(int i : b) cout<<i<<' ';
	cout<<'\n';
}

void combi(int start, vector<int> b){ //조합 함수 
	if(b.size()==k){
		print(b);
		return;
	}
	
	for(int i=start+1;i<n;i++){
		b.push_back(a[i]);
		combi(i,b);
		b.pop_back();
	}
	return;
}


int main(){
	n = sizeof(a)/sizeof(int);
	cin>>k;
	vector<int> b;
	combi(-1,b);
	return 0;
}
