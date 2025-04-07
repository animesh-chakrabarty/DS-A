#include<bits/stdc++.h>
using namespace std;

int calculateMinEnergyReq(int n, int arr[], int currenti, int dp[], k){
	if(currenti == n-2)return dp[currenti] = abs(arr[n-1]-arr[n-2]);
	if(currenti == n-3)return dp[currenti] = abs(arr[n-1]-arr[n-3]);

	if(dp[currenti] != -1) return dp[currenti];

// 	// jump 1 step
// 	int x = abs(arr[currenti+1] - arr[currenti]) + calculateMinEnergyReq(n, arr, currenti+1, dp);

// 	// jump 2 steps
// 	int y = abs(arr[currenti+2] - arr[currenti]) + calculateMinEnergyReq(n, arr, currenti+2, dp);

// 	return dp[currenti]=min(x,y);

	int minVal = INT_MAX;
	for (int i = 1; i <= k; ++i)
	{
		int x = abs(arr[currenti+k] - arr[currenti]) + calculateMinEnergyReq(n, arr, currenti+k, dp);
		minVal = min(minVal, x);
	}

	return minVal;
}


int main(){
	int n, k;
	cin >> n;
	int arr[n];
	
	int dp[n+1];
	memset(dp, -1, sizeof dp);

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];	
	}

	cin >> k;

	calculateMinEnergyReq(n, arr, 0, dp, k);

	cout << dp[0];
}