#include<bits/stdc++.h>
using namespace std;

string largestOddNum(string num){
	string ans = "";
	int len = num.length();

	// working but getting MEMORY LIMIT EXCEEDED IN LC
	// REASON:  Every time num.substr(0, i + 1) is called, a new string object is allocated in memory. For large inputs, this can quickly consume available memory.
	
	// for (int i = 0; i < len; ++i)
	// {
	// 	// if the digit is odd then the whole number from index 0 to that digit will be odd
	// 	if(num[i]%2 == 1){
	// 		ans = num.substr(0, i+1);
	// 	}
	// }

	for (int i = len-1; i >= 0; i--)
	{
		if(num[i]%2 == 1){
			ans = num.substr(0,i+1);
			break;
		}
	}

	return ans;
}

int main(){
	string num;
	getline(cin, num);

	cout << largestOddNum(num);
}