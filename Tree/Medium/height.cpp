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

	root->right->right->right = new Node(8);

	return root;
}

int calculateHeight(Node* root){
	if(!root)return 0;

	int lh = calculateHeight(root->left);
	int rh = calculateHeight(root->right);

	return 1+max(lh,rh);
}

int main(){
	Node* root = createBT();

	cout << calculateHeight(root);
}