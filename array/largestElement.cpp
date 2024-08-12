#include<bits/stdc++.h>
using namespace std;

// TC - O(N)
// SC - O(1)

int findMax(int n, int arr[]){
	int maxValue = INT_MIN;

	for (int i = 0; i < n; ++i) maxValue = max(maxValue, arr[i]);

	return maxValue;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int max = findMax(n, arr);
	cout << max;
}