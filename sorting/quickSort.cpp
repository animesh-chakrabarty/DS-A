#include<bits/stdc++.h>
using namespace std;

// approach 
// TC - O(NlogN)
// SC - O(1)

int findPivotAndPutInRightPlace(int lo, int hi, int arr[]){
	// choose pivot 
	int pivot = lo;
	// initialize i & j
	int i = lo;
	int j = hi;

	while(i < j){
		// keep incrementing i untill arr[i] > arr[pivot] 
		while(arr[i] < arr[pivot] && i<hi)i++;
		// keep decrementing j untill arr[j] < arr[pivot]
		while(arr[j] > arr[pivot] && j>lo)j--;
		// once lesser & greater value than pivot is found just swap 
		if(i<j) swap(arr[i], arr[j]);
	}

	return i;
}

void quickSort(int lo, int hi, int arr[]){
	if(lo < hi){
		int pIndex = findPivotAndPutInRightPlace(lo, hi, arr);
		quickSort(lo, pIndex-1, arr);
		quickSort(pIndex+1, hi, arr);
	}
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	quickSort(0, n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  " ";
	}
}