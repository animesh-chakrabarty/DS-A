#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, int dp[]){
	if(n <= 1)return n;

	// retrieve value from dp array
	if(dp[n] != -1)return dp[n];

	// store value in dp array
	return dp[n]=fibonacci(n-1, dp) + fibonacci(n-2, dp);
}

int main(){
	int n;
	cin >> n;

	// initialize dp array
	int dp[n+1];
	memset(dp, -1, sizeof dp);

	cout << fibonacci(n, dp);
}

// TC -> O(N)
// SC -> O(N) + O(N)
// 		 recursion stack space + dp array