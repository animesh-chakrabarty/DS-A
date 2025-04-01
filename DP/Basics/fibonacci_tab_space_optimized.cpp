#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n <= 1) return n;
	int prev2 = 0;
	int prev = 1;
	int x = -1;

	for (int i = 2; i <= n; ++i)
	{
		x = prev + prev2;
		
		prev2 = prev;
		prev = x;
	}

	return x;
}

int main(){
	int n;
	cin >> n;

	cout << fibonacci(n);
}

// TC -> O(N)
// SC -> O(1)