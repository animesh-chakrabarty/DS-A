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

int checkHeightBalanced(Node* node){
	if(!node) return 0;

	int lh = checkHeightBalanced(node->left);
	if(lh == -1) return -1;

	int rh = checkHeightBalanced(node->right);
	if(rh == -1) return -1;

	if(abs(lh-rh) <= 1)return 1+max(lh,rh);

	return -1;
}

bool isHeightBalanced(Node* root){
	return checkHeightBalanced(root) != -1;
}

int main(){
	Node* root = createBT();

	cout << isHeightBalanced(root);
}