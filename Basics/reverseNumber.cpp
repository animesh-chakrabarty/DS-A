#include<bits/stdc++.h>
using namespace std;


// TC - O(floor(log10N)+1)
int reverseNum(int n){
	int reversedNum = 0;

	while(n != 0){
		int ld = n%10;
		n = n/10;
		reversedNum = reversedNum*10 + ld;
	}

	return reversedNum;
}

int main(){
	int n;
	cin >> n;

	cout << reverseNum(n);
}