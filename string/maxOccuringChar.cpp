#include<bits/stdc++.h>
using namespace std;

// TC - max(str.length(), 26)
// SC - O(26) - O(1)

char maxOccuringCharacter(string str){
	int hashArr[26] = {0};

	// counting occurance of each character of the string (using hash array)
	for (int i = 0; i < str.length(); ++i)
	{
		int temp;
		if(str[i] >= 'A' && str[i] <= 'Z') temp = str[i] - 'A';
		else temp = str[i] - 'a';
		hashArr[temp]++;
	}

	int maxOccuranceIndex = 0;
	char maxOccChar = str[0];

	// finding most occuring character from the hash array
	for (int i = 0; i < 26; ++i)
	{
		if(hashArr[i] > hashArr[maxOccuranceIndex]){
			maxOccuranceIndex = i;
			maxOccChar = char(maxOccuranceIndex + 97);
		}
	}

	return maxOccChar;
}

int main(){
	string str;
	getline(cin, str);

	cout << maxOccuringCharacter(str);
}