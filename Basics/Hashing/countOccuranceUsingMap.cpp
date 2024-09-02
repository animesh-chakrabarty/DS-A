#include<bits/stdc++.h>
using namespace std;

// TC of map
// lookup - O(logN)
// insert/delete - O(logN)

// TC of unordered_map
// lookup - average case - O(1) /  worst case - O(N)
// insert/delete - average case - O(1) /  worst case - O(N)

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

	int t;
	cin >> t;
	while(t--){
		char x;
		cin >> x;
		cout << mpp[x] << endl;
	}
}