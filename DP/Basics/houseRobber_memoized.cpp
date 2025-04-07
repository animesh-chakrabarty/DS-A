#include<bits/stdc++.h>
using namespace std;

int maxRobberyAmount(int n, int arr[], int i, vector<int> &dp){
	if(i == n-1)return dp[i]=arr[i];
	if(i == n-2)return dp[i]=max(arr[i], arr[i+1]);

	if(dp[i] != -1)return dp[i];

	// rob this house
	int l = arr[i] + maxRobberyAmount(n, arr, i+2, dp);

	// don't rob this house
	int r = maxRobberyAmount(n, arr, i+1, dp);

	return dp[i]=max(l, r);
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	// int dp[n+1];
	// memset(dp, -1, sizeof dp);

	vector<int> dp(n+1, -1);
	maxRobberyAmount(n, arr, 0, dp);

	cout << dp[0];
}