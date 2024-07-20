#include<bits/stdc++.h>
using namespace std;

// approach - 1: iterative implementation
// TC: O(logN)
int BS(int n, int arr[], int target){
	int lo = 0, hi = n-1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;
		if(arr[mid]==target)return mid;
		else if (arr[mid] < target){
			lo = mid+1;
			continue;
		}
		else if (arr[mid]>target){
			hi = mid-1;
			continue;
		}
	}
	return -1;
}

// approach -2: recursive implementation

int main(){
	int n, target;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> target;

	int res = BS(n, arr, target);
	cout << res;
}