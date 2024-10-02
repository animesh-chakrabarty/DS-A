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

vector<vector<int>> zigZag(Node* root){
	vector<vector<int>> ans;
	queue<Node*> q;
	int count = 1;

	if (!root) return ans;

	q.push(root);

	while(!q.empty()){
		int size = q.size();
		vector<int> level;

		for (int i = 0; i < size; ++i)
		{
			Node* temp = q.front();
			q.pop();
			level.push_back(temp->data);

			if(temp->left)q.push(temp->left);
			if(temp->right)q.push(temp->right);
		}

		if(count%2 == 0)reverse(level.begin(), level.end());
		ans.push_back(level);
		count++;
	}

	return ans;
}

int main(){
	Node* root = createBT();

	vector<vector<int>> ans;
	ans = zigZag(root);

	for(auto it: ans){
		for(auto it1: it) cout << it1 << " ";
		cout << endl;
	}
}