#include <bits/stdc++.h>
using namespace std;
//map은 mp.end()를 써서 위치 이터레이터 반환, string::npos는 불가능	
 
map<string, int> mp;
string a[] = {"c", "b", "a"};

int main(){
	for(int i = 0; i < 3; i++){
		mp.insert({a[i], i + 1});
		mp[a[i]] = i + 1;
	}
	
// find를 써야 함.
	cout << mp["j"] << '\n';
	// 대괄호로 수정가능.
	mp["j"] = 4;
	cout << mp.size() << '\n';
	mp.erase("j");
	auto it = mp.find("j");
	if(it == mp.end()){
	cout<<"not found\n";
	}
	mp["j"] = 100;
	it = mp.find("j");
	if(it != mp.end()){
	cout << (*it).first << " : " << (*it).second << '\n';
	}
	for(auto it : mp){
	cout << (it).first << " : " << (it).second << '\n';
	}
	for(auto it = mp.begin(); it != mp.end(); it++){
	cout << (*it).first << " : " << (*it).second << '\n';
	}
	mp.clear();
return 0;
}
