#include<bits/stdc++.h>
using namespace std;

int sum(int n, int sumValue){
	if(n == 1) return 1;
	return n + sum(n-1, sumValue);
}

int main(){
	int n;
	cin >> n;

	cout << sum(n,0);
}