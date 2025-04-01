#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n, int dp[]){
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
}

int main(){
	int n;
	cin >> n;

	// initialize dp array
	int dp[n+1];
	memset(dp, -1, sizeof dp);

	fibonacci(n, dp);
	
	cout << dp[n];
}

// TC -> O(N)
// SC -> O(N) 
// 		 dp array