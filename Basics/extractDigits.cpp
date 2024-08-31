#include<bits/stdc++.h>
using namespace std;


// approach - 
// extract the digits from the last and store in a vector
// reverse the vector 
// TC - O(floor(log10N) + 1)
// ** No of digits for a value N is floor(log10N)+1
void reverseArray(vector<int> &arr){
	int len = arr.size();
	for (int i = 0; i < len/2; ++i)
	{
		swap(arr[i], arr[len-1-i]);
	}
}

vector<int> extractDigits(int n){
	vector<int> ans;

	while(n > 0){
		int ld = n%10;
		n = n/10;
		ans.push_back(ld);
	}

	reverseArray(ans);
	return ans;
}

int main(){
	int n;
	cin >> n;

	vector<int> ans;
	ans = extractDigits(n);
	for(auto it: ans) cout << it << " ";
}