#include<bits/stdc++.h>
using namespace std;

void ClimbStairs(int n, int dp[]){
	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)dp[i] = dp[i-1] + dp[i-2];
}

int main(){
	int n;
	cin >> n;
	
	int dp[n+1];
	memset(dp, -1, sizeof dp);

	ClimbStairs(n, dp);

	cout<<dp[n];
}