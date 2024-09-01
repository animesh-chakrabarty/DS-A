#include<bits/stdc++.h>
using namespace std;

// TC - O(N)
// SC - O(N)

string replaceSpaces(string str){
	string newStr;

	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i] == ' '){
			newStr.push_back('@');
			newStr.push_back('4');
			newStr.push_back('0');
		}else{
			newStr.push_back(str[i]);
		}
	}

	return newStr;
}

int main(){
	string str;
	getline(cin, str);

	cout << replaceSpaces(str);
}