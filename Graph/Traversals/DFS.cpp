#include<bits/stdc++.h>
using namespace std;

void findDFS(vector<int> adj[], vector<int> &ans, int visitedArr[], int node){
	visitedArr[node] = 1;
	ans.push_back(node);

	for(auto it: adj[node]){
		if(!visitedArr[it]){
			findDFS(adj, ans, visitedArr, it);
		}
	}
}

vector<int> DFS(vector<int> adj[], int n, int root){
	vector<int> ans;
	int visitedArr[n+1] = {0};
	findDFS(adj, ans, visitedArr, root);
	return ans;
}

int main(){
	int n, m, root;
	cin >> n >> m;

	vector<int> adj[n+1];
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cin >> root;
	vector<int> ans = DFS(adj, n, root);

	for(auto it: ans) cout << it << " ";
}