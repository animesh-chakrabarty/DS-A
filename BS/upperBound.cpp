#include<bits/stdc++.h>
using namespace std;

// TC: O(logN)
int upperBound(int n, int arr[], int target){
	int lo = 0, hi = n-1;
	int ans = -1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == target){
			if(mid < n-1)ans = arr[mid+1];
			break;
		}
		else if(arr[mid]>target){
			ans = arr[mid];
			hi = mid-1;
			continue;
		}
		else if(arr[mid]<target){
			lo = mid+1;
			continue;
		}
	}
	return ans;
}

int main(){
	int n, target;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> target;

	int ans = upperBound(n, arr, target);
	cout << ans;
}