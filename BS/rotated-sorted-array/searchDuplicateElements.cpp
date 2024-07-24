#include<bits/stdc++.h>
using namespace std;

int search(int n, int arr[], int target){
	int lo = 0, hi = n-1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == target) return mid;
		else {
			// EDGE CASE: 
			if(arr[mid] == arr[lo] && arr[mid] == arr[hi]){
				lo++;
				hi--;
				continue;
			}
			else if(arr[mid]>=arr[lo]){
				if(target>=arr[lo] && target<=arr[mid]) hi = mid-1;
				else lo = mid+1;
			}
			else if(arr[mid]<=arr[hi]){
				if(target >= arr[mid] && target <= arr[hi]) lo = mid+1;
				else hi = mid-1;
			}
		}
	}

	return -1;
}

int main(){
	int n,target;
	cin >> n;

	int arr[n]	;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cin >> target;

	int ans = search(n, arr, target);
	cout << ans;
}