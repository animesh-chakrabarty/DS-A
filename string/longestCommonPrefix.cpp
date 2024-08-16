#include<bits/stdc++.h>
using namespace std;

string largestCommonPrefix(vector<string> &strs){
	string ans = strs[0];
	for (int i = 0; i < strs.size(); ++i)
	{
		for (int j = 0; j < ans.length(); ++j)
		{
			if(ans[j] != strs[i][j]){
				ans.erase(j,ans.length()-j);
				break;
			}
		}
	}

	return ans;
}

int main(){
	int n;
	cin >> n;
	vector<string> strs;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		strs.push_back(str);
	}

	cout << largestCommonPrefix(strs);
}