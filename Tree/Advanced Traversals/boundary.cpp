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

	root->left->right->right = new Node(10);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	root->right->left->left = new Node(9);

	return root;
}

bool isLeaf(Node* node){
	if(node->left || node->right)return false;
	return true;
}

void addLeftBoundary(Node* root, vector<int> &ans){
	Node* curr = root->left;

	while(curr){
		if(!isLeaf(curr))ans.push_back(curr->data);
		if(curr->left)curr = curr->left;
		else curr = curr->right;
	}
}

void addLeafNodes(Node* node, vector<int> &ans){
	if(isLeaf(node)){
		ans.push_back(node->data);
		return;
	}

	if(node->left)addLeafNodes(node->left, ans);
	if(node->right)addLeafNodes(node->right, ans);
}

void addRightBoundary(Node* root, vector<int> &ans){
	Node* curr = root->right;
	vector<int> temp;

	while(curr){
		if(!isLeaf(curr))temp.push_back(curr->data);
		if(curr->right)curr = curr->right;
		else curr = curr->left;
	}

	for(int i = temp.size()-1; i>=0 ; i-- )ans.push_back(temp[i]);
}


vector<int> boundary(Node* root){
	vector<int> ans;
	if(!root)return ans;
	if(!isLeaf(root))ans.push_back(root->data);

	addLeftBoundary(root, ans);
	addLeafNodes(root, ans);
	addRightBoundary(root, ans);

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> ans;
	ans = boundary(root);

	for(auto it: ans)cout << it << " ";
}