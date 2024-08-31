#include<bits/stdc++.h>
using namespace std;

int findOneAppearence(int n, int arr[]){
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = ans ^ arr[i];
	}

	return ans;
}

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)cin >> arr[i];

	cout << findOneAppearence(n, arr);
}