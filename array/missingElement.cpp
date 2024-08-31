#include<bits/stdc++.h>
using namespace std;

int findMissingElement_1(int n, int arr[]){
	if(arr[0] != 1) return 1;
	for (int i = 1; i < n-1; ++i)
	{
		if(arr[i] - arr[i-1] != 1) return arr[i]-1;
	}
	return n;
}

int findMissingElement_2(int n, int arr[]){
	int sum = 0;
	for (int i = 0; i < n-1; ++i)sum += arr[i];

	int temp = (n*(n+1))/2;

	return temp - sum;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	cout << findMissingElement_1(n, arr) << endl;
	cout << findMissingElement_2(n, arr) << endl;
}