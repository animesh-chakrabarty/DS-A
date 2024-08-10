#include<bits/stdc++.h>
using namespace std;

void merge(int lo, int mid, int hi, int arr[] ){
	int left = lo;
	int right = mid+1;
	vector<int> temp;
	while(left <= mid && right <= hi){
		if(arr[left] < arr[right]){
			temp.push_back(arr[left]);
			left++;
		}else{
			temp.push_back(arr[right]);
			right++;
		}
	}

	while(left <= mid){
		temp.push_back(arr[left]);
		left++;
	}

	while(right <= hi){
		temp.push_back(arr[right]);
		right++;
	}

	for (int i = lo; i <= hi; ++i)
	{
		arr[i] = temp[i-lo];
	}
}

void mergeSort(int lo, int hi, int arr[]){
	if(lo >= hi) return;
	int mid = (lo+hi)/2;
	mergeSort(lo, mid, arr);
	mergeSort(mid+1, hi, arr);
	merge(lo, mid, hi, arr);
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	mergeSort(0, n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  " ";
	}
}