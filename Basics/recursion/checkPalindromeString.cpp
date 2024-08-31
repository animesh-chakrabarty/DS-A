#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i){
	if(i >= s.length()/2) return true;

	if(s[i] != s[s.length()-1-i]) return false;

	return isPalindrome(s, i+1);
}

int main(){
	string s;
	getline(cin, s);

	cout << isPalindrome(s, 0);
}