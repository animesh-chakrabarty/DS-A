#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string s, string t){
	if(s.length() != t.length()) return false;

	map<char, int> sTrack;
	map<char, int> tTrack;
	for (int i = 0; i < s.length(); ++i)
	{
		if(!sTrack[s[i]]) {
			sTrack[s[i]] = 1;
			continue;
		}
		sTrack[s[i]]++;
	}

	for (int i = 0; i < t.length(); ++i)
	{
		if(!tTrack[t[i]]) {
			tTrack[t[i]] = 1;
			continue;
		}
		tTrack[t[i]]++;
	}

	return sTrack == tTrack;
}

int main(){
	string s, t;
	cin >> s;
	cin >> t;

	cout << checkAnagram(s, t);
}