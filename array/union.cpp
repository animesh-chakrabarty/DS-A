#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int m, int n, int arr1[], int arr2[]){
	int i = 0, j = 0;
	vector<int> ans;

	while(i < m && j < n){

		// EDGE CASE:
		if(arr1[i] == arr1[i-1]){
			i++;
			continue;
		}
		if(arr2[j] == arr2[j-1]){
			j++;
			continue;
		}


		if(arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++, j++;
			continue;
		}else{
			if(arr1[i] > arr2[j]){
				ans.push_back(arr2[j]);
				j++;
				continue;
			}else{
				ans.push_back(arr1[i]);
				i++;
				continue;
			}
		}
	}

	// if the first array is exhausted
	if(i == m && j < n-1){
		// copy all the remaining elements of the second array
		for (int x = i; x < n; ++x)ans.push_back(arr2[x]);
	}

	if(j == n && i < m-1){
		// copy all the remaining elements of the second array
		for (int x = j; x < m; ++x)ans.push_back(arr1[x]);
	}

	return ans;
}

int main(){
	int m, n;
	cin >> m >> n;

	int arr1[m], arr2[n];
	for (int i = 0; i < m; ++i)cin >> arr1[i];
	for (int i = 0; i < n; ++i)cin >> arr2[i];

	vector<int> ans;
	ans = findUnion(m, n, arr1, arr2);

	for(auto it: ans) cout << it << " ";
}