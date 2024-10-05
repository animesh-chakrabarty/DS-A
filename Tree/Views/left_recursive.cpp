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

void leftView(Node* node, int level, vector<int> &ans){
	if(!node) return;

	if(ans.size() == level)ans.push_back(node->data);

	leftView(node->left, level+1, ans);
	leftView(node->right, level+1, ans);
}

int main(){
	Node* root = createBT();

	vector<int> view;
	leftView(root, 0, view);

	for(auto it: view)cout << it << " ";
}