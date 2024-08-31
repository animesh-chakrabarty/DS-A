#include<bits/stdc++.h>
using namespace std;

void print(string s, int n){
	// base condition
	if(n == 0) return;
	cout << s << " ";
	// recursive call
	print(s, n-1);
}

int main(){
	string s;
	getline(cin, s);

	print(s, 4);
}