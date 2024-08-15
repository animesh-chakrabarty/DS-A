#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
	int len = str.length();
	for (int i = 0; i < len/2; ++i)
	{
		swap(str[i],str[len-1-i]);
	}
	return str;
}

int main(){
	string str;
	getline(cin, str);

	string reversedStr = reverse(str);
	cout << reversedStr;
}