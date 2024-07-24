#include<bits/stdc++.h>
using namespace std;

int findFirstOccurance(int n, int arr[], int target){
	int lo=0, hi=n-1;
	int ans = -1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == target){
			ans = mid;
			hi = mid-1;
			continue;
		}
		else if(arr[mid] < target){
			lo = mid+1;
			continue;
		}
		else if(arr[mid] > target){
			hi = mid-1;
			continue;
		}
	}

	return ans;
}

int findLastOccurance(int n, int arr[], int target){
	int lo=0, hi=n-1;
	int ans = -1;

	while(lo <= hi){
		int mid = lo+(hi-lo)/2;

		if(arr[mid] == target){
			ans = mid;
			lo = mid+1;
			continue;
		}
		else if(arr[mid] < target){
			lo = mid+1;
			continue;
		}
		else if(arr[mid] > target){
			hi = mid-1;
			continue;
		}
	}

	return ans;
}

int countOccurances(int n, int arr[], int target){
	int firstOccurance = findFirstOccurance(n, arr, target);
	int lastOccurance = findLastOccurance(n, arr, target);

	if(firstOccurance == -1 || lastOccurance == -1) return -1;
	int occuranceCount = lastOccurance - firstOccurance + 1;
	return occuranceCount;
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

	int ans = countOccurances(n, arr, target);
	cout << ans;
}