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

	root->left->right->right = new Node(90);
	root->left->right->right->right = new Node(100);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	root->right->right->right = new Node(8);

	return root;
}

int diameterOfTree(Node* node, int &d){
	if(!node) return 0;

	int lh = diameterOfTree(node->left, d);
	int rh = diameterOfTree(node->right, d);

	int currentd = 1 + lh + rh;

	d = max(currentd, d);

	return 1 + max(lh, rh);
}

int calculateDiameter(Node* root){
	int diameter = 0;
	diameterOfTree(root, diameter);

	return diameter;
}

int main(){
	Node* root = createBT();

	cout << calculateDiameter(root);
}