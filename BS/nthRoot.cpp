#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n, int m){
	int lo = 1, hi = m;

	while(lo <= hi){
		int mid = (lo+hi)/2;
		cout << mid << " " << pow(mid,n) << endl;
		if((int)pow(mid,n) == m) return mid;
		else if(pow(mid,n) < m)lo = mid+1;
		else hi = mid-1;
	}

	return -1;
}

int main(){
	int n, m;
	cin >> n >> m;

	cout << nthRoot(n, m);
}