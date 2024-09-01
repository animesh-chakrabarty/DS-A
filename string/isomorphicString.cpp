#include<bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string s, string t){
	if(s.length() != t.length()) return false;

	for (int i = 0; i < s.length(); ++i)t[i] = s[i];

	cout << s << " " << t << endl;

	return s == t;
}

int main(){
	string s, t;
	cin >> s;
	cin >> t;

	cout << checkIsomorphic(s, t);
}