#include<bits/stdc++.h>
using namespace std;

// TC - O(N)
// SC - O(1)

int findSecondMax(int n, int arr[]){
	int max1 = INT_MIN, max2 = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		// for element greater than max 
		if(arr[i] > max1){
			max2 = max1;
			max1 = arr[i];
		}

		// for element greater than second max but lesser than max
		else if(arr[i] > max2 && arr[i] < max1)max2 = arr[i];
	}

	return max2;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int secondMax = findSecondMax(n, arr);
	cout << secondMax;
}