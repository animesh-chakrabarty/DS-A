#include<bits/stdc++.h>
using namespace std;

void createMap(string str, map<char,int> &mpp){
	for (int i = 0; i < str.length(); ++i)
	{
		mpp[str[i]]++;
	}
}

int main(){
	string str;
	getline(cin, str);

	// pre-compute
	map<char,int> mpp;
	createMap(str, mpp);

	int maxCount = 0;
	char maxChar;
	for(auto it: mpp){
		if(it.second > maxCount){
			maxCount = it.second;
			maxChar = it.first;
		}
	}

	cout << maxChar;
}