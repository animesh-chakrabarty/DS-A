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

vector<int> postOrder(Node* root){
	stack<Node*> st1;
	stack<Node*> st2;
	vector<int> ans;

	st1.push(root);

	while(!st1.empty()){
		Node* temp = st1.top();
		st1.pop();

		st2.push(temp);

		if(temp->left)st1.push(temp->left);
		if(temp->right)st1.push(temp->right);
	}

	int size = st2.size();

	for(int i = size; i>0; i--){
		Node* temp = st2.top();
		ans.push_back(temp->data);
		st2.pop();
	}

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> ans;
	ans = postOrder(root);

	for(auto it: ans)cout << it << " ";
}