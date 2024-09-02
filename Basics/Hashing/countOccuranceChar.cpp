#include<bits/stdc++.h>
using namespace std;

// constraint: there can only be lowercase characters in the string

void createHashArr(string str, int hashArr[]){
	for (int i = 0; i < str.length(); ++i)
	{
		hashArr[str[i]-'a']++;
	}
}

int main(){
	string str;
	getline(cin, str);

	// create hashArray
	int hashArr[26] = {0};
	createHashArr(str, hashArr);

	// take queries 
	int t;
	cin >> t;
	while(t--){
		char x;
		cin >> x;
		cout << hashArr[x - 'a'] << endl;
	}
}