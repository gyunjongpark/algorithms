#include <bits/stdc++.h>
using namespace std;
//map�� mp.end()�� �Ἥ ��ġ ���ͷ����� ��ȯ, string::npos�� �Ұ���	
 
map<string, int> mp;
string a[] = {"c", "b", "a"};

int main(){
	for(int i = 0; i < 3; i++){
		mp.insert({a[i], i + 1});
		mp[a[i]] = i + 1;
	}
	
// find�� ��� ��.
	cout << mp["j"] << '\n';
	// ���ȣ�� ��������.
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
