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

void preOrder(Node* node){
	if(!node) return;
	
	cout << node->data << " ";

	preOrder(node->left);
	preOrder(node->right);
}

void inOrder(Node* node){
	if(!node) return;

	inOrder(node->left);
	cout << node->data << " ";
	inOrder(node->right);
}

void postOrder(Node* node){
	if(!node) return;

	postOrder(node->left);
	postOrder(node->right);
	cout << node->data << " ";
}

int main(){
	Node* root = createBT();

	preOrder(root);
	cout << endl;

	inOrder(root);
	cout << endl;

	postOrder(root);
	cout << endl;
}