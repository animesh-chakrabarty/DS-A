#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char c){
	if(c >= 'a' && c <= 'z')return c;
	char UC = c - 'A' + 'a';
	return UC;
}

bool isPalindrome(string str){
	int len = str.length();
	for (int i = 0; i < len/2; ++i)
	{
		if(toLowerCase(str[i]) != toLowerCase(str[len-1-i])) return false;
	}
	return true;
}

int main(){
	string str;
	getline(cin, str);

	cout << isPalindrome(str);
}