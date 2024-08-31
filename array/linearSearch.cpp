#include<bits/stdc++.h>
using namespace std;

int search(int n, int arr[], int target){
	for (int i = 0; i < n; ++i)
	{
		if(target == arr[i]) return i;
	}

	return -1;
}

int main(){
	int n, target;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	cin >> target;
	cout << search(n, arr, target);
}