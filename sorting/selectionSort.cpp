#include<bits/stdc++.h>
using namespace std;

// approach -  select the minimum value and put it on the right index
void selectionSort(int n, int arr[]){
	int minIndex = 0;

	for (int i = 0; i < n; ++i)
	{
		// iterating on the unsorted part of the array and finding minimum index
		int min_val = INT_MAX;
		for (int j = i; j < n; ++j)
		{
			if(arr[j] <= min_val){
				min_val = arr[j];
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
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

	selectionSort(n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  " ";
	}
}