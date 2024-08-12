#include<bits/stdc++.h>
using namespace std;


// approach - 1
// TC - (N^2)
void moveZeroesToEnd1(int n, int arr[]){
	for (int i = 0; i < n; ++i)
	{	
		// if zero encountered find the first non zero element and swap with arr[i]
		if(arr[i] == 0){
			int j = i;
			while(arr[j] == 0 && j<n-1)j++;
			swap(arr[i], arr[j]);
		}
	}	
}

// approach - 2 : two pointer
// TC - O(N)
void moveZeroesToEnd2(int n, int arr[]){
	int p1 = -1;

	// find the first zero element
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == 0){
			p1 = i;
			break;
		}
	}

	// if there is no zero element
	if(p1 == -1) return;

	for (int i = p1+1 ; i < n; ++i)
	{
		if(arr[i] != 0){
			swap(arr[i], arr[p1]);
			p1++;
		}
	}
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	moveZeroesToEnd1(n, arr);
	for (int i = 0; i < n; ++i)cout << arr[i] << " ";
}