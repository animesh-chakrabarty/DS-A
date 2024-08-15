#include<bits/stdc++.h>
using namespace std;

bool validChar(char x){
	if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9')) return true;
	return false;
}

char toLowerCase(char c){
	if(c >= 'a' && c <= 'z')return c;
	char UC = c - 'A' + 'a';
	return UC;
}

bool isValidPalindrome(string str){
	string pureString = "";
	for (int i = 0; i < str.length(); ++i)
	{
		// remove all non-alpha numeric characters
		if(validChar(str[i]))pureString.push_back(str[i]);
	}
	
	int len = pureString.length();
	// convert all character to lowercase
	for (int i = 0; i < len; ++i)
	{
		pureString[i] = toLowerCase(pureString[i])		;
	}

	 // check palindrome
	for (int i = 0; i < len/2; ++i)
	{
		if(pureString[i] != pureString[len - 1 - i]) return false;
	}
	return true;
}

int main(){
	string str;
	getline(cin, str);

	cout << isValidPalindrome(str);
}