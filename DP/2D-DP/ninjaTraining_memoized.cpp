#include<bits/stdc++.h>
using namespace std;

// 1. represent by index
// 2. do everything possible in each index
// 3. find out max/min/count as per requirement

// figure out if overlapping subproblems are there 

// i/p :
// 3 3
// 10 40 70
// 20 50 80
// 30 60 90

// o/p:
// 210

int calculateMaxMeritPoints(vector<vector<int>> input, int day, int lastTaskIndex, int m, vector<vector<int>> &dp){
	if(day == 0){
		int maxi = INT_MIN;
		for (int i = 0; i < m; ++i) if(i != lastTaskIndex)maxi = max(maxi, input[0][i]);
		return maxi;
	}

	int maxi2 = INT_MIN;

	if(dp[day][lastTaskIndex] != -1) return dp[day][lastTaskIndex];		

	for (int i = 0; i < m; ++i)
	{
		if(i != lastTaskIndex){
			// do it
			int x = input[day][i]+calculateMaxMeritPoints(input, day-1, i, m, dp);
			maxi2 = max(maxi2, x);
		}
	}

	return dp[day][lastTaskIndex]=maxi2;
}	

int main(){
	int n, m;
	vector<vector<int>> input;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		vector<int> temp;
		for (int j = 0; j < m; ++j)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}

		input.push_back(temp);
	}

	vector<vector<int>> dp(n, vector<int>(m+1, -1));

	cout << calculateMaxMeritPoints(input, n-1, m, m, dp);
}