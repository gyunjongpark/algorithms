#include<bits/stdc++.h>
using namespace std;

int n,k;
//n = �迭�� ũ��, k�� �������� ����	 
int a[5] = {7,2,3,4,5};

void print(vector<int> b){ //�ܼ� ����Լ� 
	for(int i : b) cout<<i<<' ';
	cout<<'\n';
}

void combi(int start, vector<int> b){ //���� �Լ� 
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
