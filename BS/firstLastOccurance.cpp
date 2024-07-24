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

vector<int> findFirstLastOccurance(int n, int arr[], int target){
	int firstOccur = findFirstOccurance(n, arr, target);
	int lastOccur = findLastOccurance( n,  arr,  target);

	vector<int> ans;
	ans.push_back(firstOccur);
	ans.push_back(lastOccur);
	return ans;
}

int main(){
	int n, target;
	cin >> n;	

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin  >> arr[i];
	}
	cin >> target;

	vector<int> ans;
	ans = findFirstLastOccurance(n, arr, target);
	for(auto it: ans)cout << it << " ";
}