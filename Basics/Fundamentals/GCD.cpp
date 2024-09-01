#include<bits/stdc++.h>
using namespace std;


// TC - O(N)
int GCD(int m, int n){
	int ans = -1;
	for (int i = min(m,n); i >= 0; i--)
	{
		if(m%i == 0 && n%i == 0)return i;
	}

	return ans;
}

int main(){
	int m, n;
	cin >> m >> n;

	cout << GCD(m,n);
}