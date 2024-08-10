#include<bits/stdc++.h>
using namespace std;

// approach -  select the minimum value and put it on the right index
// TC - O(N^2)
// SC - O(1)
void selectionSort(int n, int arr[]){

	for (int i = 0; i < n-1; ++i)
	{
		// iterating on the unsorted part of the array and finding minimum index
		int mini = i;
		for (int j = i+1; j < n; ++j)
		{
			if(arr[j] <= arr[mini]){
				mini = j;
			}
		}
		swap(arr[i], arr[mini]);
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