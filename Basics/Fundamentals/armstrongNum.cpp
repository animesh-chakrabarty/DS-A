#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	int len = to_string(n).length();
	int dup = n;
	int sum = 0;
	while(dup > 0){
		int ld = dup%10;
		dup = dup/10;
		sum += round(pow(ld, len));
	}

	return sum == n;
}

int main(){
	int n;
	cin >> n;
	cout << checkArmstrong(n);
}