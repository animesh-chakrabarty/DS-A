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

vector<int> preOrder(Node* root){
	stack<Node*> st;
	vector<int> ans;

	if(!root) return ans;

	st.push(root);

	while(!st.empty()){
		Node* temp = st.top();
		ans.push_back(temp->data);
		st.pop();

		if(temp->right)st.push(temp->right);
		if(temp->left)st.push(temp->left);
	}

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> ans;
	ans = preOrder(root);

	for(auto it: ans)cout << it << " ";
}