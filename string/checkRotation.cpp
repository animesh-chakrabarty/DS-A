#include<bits/stdc++.h>
using namespace std;



bool checkRotation(string s, string t){
	if(s.length() != t.length()) return false;
	string s2 = s+s;

	for (int i = 0; i < s2.length(); ++i)
	{
		int k = i;
		for (int j = 0; j < t.length(); ++j)
		{
			if((j == t.length() - 1) && (s2[k] == t[j])) return true;
			if(s2[k] != t[j]) break;
			k++;
		}		
	}	
	return false;
}

int main(){
	string s, t;
	cin >> s;
	cin >> t;

	cout << checkRotation(s, t);
}