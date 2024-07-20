#include<bits/stdc++.h>
using namespace std;

// TC: O(logN)
vector<int> lowerBound(int n, int arr[], int target){
	int lo = 0, hi = n-1;
	int floor = -1, ceil = -1;
	vector<int> ans;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == target){
			floor = ceil = arr[mid];
			break;
		}
		else if(arr[mid] > target){
			// EDGE CASE: 
			if(mid == 0){
				floor = -1;
				ceil = arr[mid];
				break;
			}
			ceil = arr[mid];
			floor = arr[mid-1];
			hi = mid-1;
			continue;
		}
		else if(arr[mid]<target){
			// EDGE CASE:
			if(mid == n-1){
				floor = arr[mid];
				ceil = -1;
				break;
			}
			lo = mid+1;
			continue;
		}
	}

	ans.push_back(floor);
	ans.push_back(ceil);
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

	vector<int> ans = lowerBound(n, arr, target);
	for(auto it: ans)cout << it << ' ';
}