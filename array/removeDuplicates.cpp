#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int n, int arr[]){
	int j = 0;
	for (int i = 0; i < n; ++i)
	{
		// check for the first unique element
		if(arr[i] != arr[j]){
			j++;
			arr[j] = arr[i];
		}
	}
	return j+1;
}

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)cin >> arr[i];

	int k = removeDuplicates(n, arr);
	
	for (int i = 0; i < k; ++i)cout << arr[i] << " ";	
}