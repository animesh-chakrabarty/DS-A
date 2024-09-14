#include<bits/stdc++.h> 
using namespace std;

int sqrt(int n){
	int lo = 1, hi = n;
	int ans = -1;
	while(lo <= hi){
		int mid = (lo+hi)/2;

		if(mid * mid == n) return mid;
		else if(mid * mid < n){
			ans = mid;
			lo = mid+1;
		}else hi = mid-1;
	}

	return ans;
}

int main(){
	int n;
	cin >> n;

	cout << sqrt(n);
}