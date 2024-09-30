#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int value){
		data = value;
		left = right = nullptr;
	}
};

Node* createBT(){
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	return root;
}

vector<vector<int>> BFS(Node* root){
	queue<Node*> q;
	vector<vector<int>> ans;

	if(!root) return ans;

	q.push(root);

	while(!q.empty()){
		vector<int> level;
		int size = q.size();

		while(size--){
			Node* temp = q.front();
			level.push_back(temp->data);
			q.pop();

			if(temp->left)q.push(temp->left);
			if(temp->right)q.push(temp->right);
		}

		ans.push_back(level);
	}

	return ans;
}

int main(){
	Node* root = createBT();

	vector<vector<int>> ans;
	ans = BFS(root);

	for(auto it: ans){
		for(auto it1: it) cout << it1 << " ";
		cout << endl;
	}
}