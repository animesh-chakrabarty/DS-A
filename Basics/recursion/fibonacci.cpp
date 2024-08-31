#include<bits/stdc++.h>
using namespace std;

int fibonacciIndex(int n){
	if(n <= 1) return n; 
	return fibonacciIndex(n-1) + fibonacciIndex(n-2);
}

int main(){
	int n;
	cin >> n;

	cout << fibonacciIndex(n);
}