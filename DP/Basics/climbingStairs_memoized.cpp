#include<bits/stdc++.h>
using namespace std;

int ClimbStairs(int n, int dp[]){
	if(n <= 1)return dp[n] = 1;

	if(dp[n] != -1) return dp[n];
	int x = ClimbStairs(n-1, dp);
	int y = ClimbStairs(n-2, dp);

	return dp[n]=x+y;
}

int main(){
	int n;
	cin >> n;
	
	int dp[n+1];
	memset(dp, -1, sizeof dp);

	ClimbStairs(n, dp);

	cout<<dp[n];
}