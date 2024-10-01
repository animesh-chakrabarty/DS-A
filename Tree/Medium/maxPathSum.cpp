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

int calculateMaxSum(Node* node, int &sum){
	if(!node) return 0;
	int lsum = max(0, calculateMaxSum(node->left, sum));
	int rsum = max(0, calculateMaxSum(node->right, sum));

	int currentSum = node->data + lsum + rsum;

	sum = max(sum, currentSum);

	return node->data + max(lsum, rsum);
}

int maxPathSum(Node* root){
	int sum = INT_MIN;
	calculateMaxSum(root, sum);
	return sum;
}

int main(){
	Node* root = createBT();

	cout << maxPathSum(root);
}