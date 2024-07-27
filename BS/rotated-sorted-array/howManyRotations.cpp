#include<bits/stdc++.h>
using namespace std;

// observation :
// no of rotations = index of minimum element 

int noOfRotations(int n, int arr[]){
	int lo = 0, hi = n-1;
	int minVal = INT_MAX;
	int ans = -1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;
		if(arr[lo] < arr[hi]){
			if(arr[lo] < minVal){
				minVal = arr[lo];
				ans = lo;
			}
			break;
		}
		// if left half is sorted
		if(arr[lo] <= arr[mid]){
			// pick the min of left half
			if(arr[lo] < minVal){
				minVal = arr[lo];
			    ans = lo;
			}
		    // eliminate left half
			lo = mid+1;
			continue;
		}
		else if(arr[hi] >= arr[mid]){
			if(arr[mid] < minVal){
				minVal = arr[mid];
				ans = mid;
			}
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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int ans = noOfRotations(n, arr);
	cout << ans;

	return 0;
}