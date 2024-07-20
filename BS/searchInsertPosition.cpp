#include<bits/stdc++.h>
using namespace std;


// TC: O(logN)
int lowerBound(int n, int arr[], int target){
	int lo = 0, hi = n-1;
	int ans = 0;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;
		if(arr[mid] == target){
			ans = mid;
			break;
		}
		else if(arr[mid]>target){
			ans = mid;
			hi = mid-1;
			continue;
		}
		else if(arr[mid]<target){
			if(mid == n-1){
				ans = n;
				break;
			}
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

	int ans = lowerBound(n, arr, target);
	cout << ans;
}