#include<bits/stdc++.h>
using namespace std;

bool checkIfSorted(int n, int arr[]){
	for (int i = 1; i < n; ++i)
	{
		if(arr[i] < arr[i-1]) return 0;
	}

	return 1;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	cout << checkIfSorted(n, arr);
}