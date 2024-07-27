#include<bits/stdc++.h>
using namespace std;

int findSingleElement(int n, int arr[]){
	if(n == 1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];

	int lo = 2, hi = n-3;

	while(lo <= hi){
		int mid = (lo+hi)/2;

		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
		if((mid % 2 == 1 && arr[mid-1] == arr[mid]) || (mid % 2 == 0 && arr[mid+1] == arr[mid])) lo = mid+1;
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

	int ans = findSingleElement(n, arr);
	cout << ans;
}