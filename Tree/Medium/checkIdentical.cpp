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

Node* createBT1(){
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

Node* createBT2(){
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	root->right->right->right = new Node(8);
	root->right->right->right->left = new Node(8);

	return root;
}

bool checkIdentical(Node* p, Node* q){
	if(!p && !q) return true;

	if((p && !q) || (!p && q)) return false;

	if(p->data != q->data) return false;
	
	bool l = checkIdentical(p->left, q->left);
	if(!l)return false;
	bool r = checkIdentical(p->right, q->right);
	if(!r)return false;

	return true;
}

int main(){
	Node* p = createBT1();
	Node* q = createBT2();

	cout << checkIdentical(p, q);
}