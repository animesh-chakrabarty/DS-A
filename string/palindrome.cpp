#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	int len = str.length();
	for (int i = 0; i < len/2; ++i)
	{
		if(str[i] != str[len-1-i]) return false;
	}
	return true;
}

int main(){
	string str;
	getline(cin, str);

	cout << isPalindrome(str);
}