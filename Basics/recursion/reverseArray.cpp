#include<bits/stdc++.h>
using namespace std;

void reverseArray(int start, int end, int arr[]){
	if(start < end){
		swap(arr[start], arr[end]);
		reverseArray(start+1, end-1, arr);
	}
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	reverseArray(0, n-1, arr);

	for (int i = 0; i < n; ++i)cout << arr[i] <<  " ";
}