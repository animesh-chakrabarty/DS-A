#include<bits/stdc++.h>
using namespace std;

int findMin(int n, int arr[]){
	int lo = 0, hi = n-1;
	int ans = INT_MAX;

	while(lo <= hi){
		int mid = (lo+hi)/2;

		// if left half is sorted
		if(arr[lo] <= arr[mid]){
		// pick the min of the left half
			ans = min(ans, arr[lo]);
		// eliminate the left half
			lo = mid+1;
			continue;
		}
		// if the right half is sorted
		else if(arr[hi] >= arr[mid]){
			// pick the min of the right half
			ans = min(ans, arr[mid]);
			// eliminate the right half
			hi = mid-1;
			continue;
		}
	}
	return ans;
}


int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int ans = findMin(n, arr);
	cout << ans;

	return 0;
}

