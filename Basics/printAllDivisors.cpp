#include<bits/stdc++.h>
using namespace std;

vector<int> getAllDivisors(int n){
	vector<int> divisors;
	divisors.push_back(1);

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if(n%i == 0){
			if(n/i != i){
				divisors.push_back(i);
				divisors.push_back(n/i);
				continue;
			}
			divisors.push_back(i);
		}
	}

	divisors.push_back(n);

	sort(divisors.begin(), divisors.end());

	return divisors;
}

int main(){
	int n;
	cin >> n;

	vector<int> divisors;
	divisors = getAllDivisors(n);
	for(auto it: divisors) cout << it << " ";
}