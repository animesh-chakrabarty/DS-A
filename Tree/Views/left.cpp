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

	root->right->left->left = new Node(8);

	root->right->left->left->right = new Node(9);

	return root;
}

vector<int> leftView(Node* root){
	vector<int> ans;
	if(!root)return ans;

	queue<pair<Node*, int>> q;
	map<int, int> mp;

	q.push({root, 0});

	while(!q.empty()){
		pair<Node*, int> temp;
		temp = q.front();
		q.pop();

		Node* element = temp.first;
		int level = temp.second;

		if(!mp[level])mp[level]=element->data;

		if(element->left)q.push({element->left, level+1});
		if(element->right)q.push({element->right, level+1});
	}

	for(auto it: mp)ans.push_back(it.second);
}

int main(){
	Node* root = createBT();

	vector<int> view;
	view = leftView(root);

	for(auto it: view)cout << it << " ";
}
