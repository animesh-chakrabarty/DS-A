#include<bits/stdc++.h>
using namespace std;

int ClimbStairs(int n){
	if(n <= 1)return 1;

	int x = ClimbStairs(n-1);
	int y = ClimbStairs(n-2);

	return x+y;
}

int main(){
	int n;
	cin >> n;

	cout << ClimbStairs(n);
}