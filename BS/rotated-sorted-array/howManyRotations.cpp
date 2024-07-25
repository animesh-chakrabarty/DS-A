#include<bits/stdc++.h>
using namespace std;

int noOfRotations(int n, int arr[]){
	int lo = 0, hi = n-1;

	while(lo <= hi){
		int mid = lo + (hi-lo)/2;

		cout << mid << " ";

		// if left side is sorted
		if(arr[lo] < arr[mid]){
			if(arr[mid] > arr[mid+1]) return mid+1;
			else lo = mid+1;
		}
		else if(arr[hi] > arr[mid]){
			if(arr[mid-1] > arr[mid]) return mid;
			else hi = mid-1;
		}
	}

	return -1;
}

int main(){
	int n;
	cin >> n;

	int arr[n]	;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int ans = noOfRotations(n, arr);
	cout << ans;
}