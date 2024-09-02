#include<bits/stdc++.h>
using namespace std;

// inside main() function at max we can create an array with size 1e6 and in global scope at max 1e7 size array can be created

void createHashArr(int n, int arr[], int hashArr[]){
	for (int i = 0; i < n; ++i)
	{
		hashArr[arr[i]]++;
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)cin >> arr[i];

	// create hasharray
	int hashArr[11] = {0};
	createHashArr(n, arr, hashArr);

	// take testcases input
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		cout << hashArr[x] << endl;
	}
}