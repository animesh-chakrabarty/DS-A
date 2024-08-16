#include<bits/stdc++.h>
using namespace std;

// TC - O(N^2)
// SC - O(N)

string reverseWords(string str){
	int len = str.length();
	int temp = len-1;
	string revStr;

	for (int i = len-1; i >= 0; i--)
	{
		// EDGE CASE : If there are multiple spaces in between words
		if(str[i] == ' ' && str[i+1] == ' '){
			temp = i-1;
			continue;
		}
		if(i == 0){
			for (int j = 0; j <= temp; j++) revStr.push_back(str[j]);
			break;
		}

		if(str[i] == ' '){
			for (int j = i+1; j <= temp; ++j) revStr.push_back(str[j]);
			revStr.push_back(' ');
			temp = i-1;
		}
	}

	return revStr;
}

int main(){
	string str;
	getline(cin, str);
	cout << reverseWords(str);
}