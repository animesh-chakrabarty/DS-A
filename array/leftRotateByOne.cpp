#include<bits/stdc++.h>
using namespace std;

// TC - O(N)
// SC - O(1)

void leftRotateByOne(int n, int arr[]){
	for (int i = 0; i < n-1; ++i)
	{
		swap(arr[i],arr[i+1]);
	}
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	leftRotateByOne(n, arr);
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}