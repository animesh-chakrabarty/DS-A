#include<bits/stdc++.h>
using namespace std;

// approach - iterate over each element of the array and put it on it's right place
// TC - O(N^2)
// SC - O(1)
void insertionSort(int n, int arr[]){
	for (int i = 1; i < n; ++i)
	{
		int j = i;
		while(arr[j-1] >= arr[j] && j>=1){
			swap(arr[j-1], arr[j]);
			j--;
		}
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

	insertionSort(n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  " ";
	}
}