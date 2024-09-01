#include<bits/stdc++.h>
using namespace std;


// TC - O(floor(log10N)+1)
int reverseNum(int n){
	int reversedNum = 0;

	while(n > 0){
		int ld = n%10;
		n = n/10;
		reversedNum = reversedNum*10 + ld;
	}

	return reversedNum;
}

bool checkPalindrome(int n){
	int reversedNum = reverseNum(n);
	return reversedNum == n;
}

int main(){
	int n;
	cin >> n;

	cout << checkPalindrome(n);
}