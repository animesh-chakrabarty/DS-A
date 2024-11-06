#include<bits/stdc++.h>
using namespace std;

vector<int> BFS(vector<int> adj[], int n, int root){
	queue<int> q;
	int visitedArr[n+1] = {0};
	vector<int> ans;

	q.push(root);
	visitedArr[root]=1;

	while(!q.empty()){
		int temp = q.front();
		q.pop();
		ans.push_back(temp);

		int size = adj[temp].size();
		for (int i = 0; i < size; ++i)
		{
			if(visitedArr[adj[temp][i]] == 0){
				q.push(adj[temp][i]);
				visitedArr[adj[temp][i]]=1;
			}
		}
	}

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

	vector<int> ans = BFS(adj, n, root);
	for(auto it: ans){
		cout << it << " ";
	}
}