#include<bits/stdc++.h>
using namespace std;

int findPeak(int n, int arr[]){
	int lo = 0, hi = n-1;

	while(lo <= hi){
		int mid = (lo+hi)/2;
		// if mid is peak
		if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;

		if(arr[mid] > arr[lo])lo = mid+1;
		else hi = mid-1;
	}

	return -1;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{	
		cin >> arr[i];
	}

	int ans = findPeak(n, arr);
	cout << ans;
}