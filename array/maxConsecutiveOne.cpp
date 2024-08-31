#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int n, int arr[]){
	int maxi = 0;
	int currentMax = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == 1){
			currentMax++;
			maxi = max(maxi, currentMax);
		}else{
			currentMax = 0;
		}
	}

	return maxi;
}

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)cin >> arr[i];

	cout << maxConsecutiveOnes(n, arr);
}