#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int n, int arr[], int d){
	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);
}

int main(){
	int n, d;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	cin >> d;

	leftRotateByOne(n, arr, d);
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}