#include<bits/stdc++.h>
using namespace std;

// approach - pick the maximum and push it to the right using adjacency swap
// TC - O(N^2)
// SC - O(1)
void bubbleSort(int n, int arr[]){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1-i; ++j)
		{
			if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
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

	bubbleSort(n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  " ";
	}
}