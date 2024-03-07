#include<bits/stdc++.h>

using namespace std;

vector<string> split(const string &input, string delimiter){
	vector<string> result;
	auto start = 0;
	auto end = input.find(delimiter,start);
	
	while(end!=string::npos){
		result.push_back(input.substr(start,end-start));
		start = end + delimiter.size();
		end = input.find(delimiter,start);
	}
	result.push_back(input.substr(start));
	
	return result;
}

int main(){
	
	string input;
	getline(cin,input);
	
	vector<string> a = split(input," ");
	for(string k : a)cout<<k<<'\n';
	
	return 0;
}


