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

vector<int> inOrder(Node* root){
	Node* node;
	stack<Node*> st;
	vector<int> ans;

	node = root;

	while(true){
		if(node){
			st.push(node);
			node = node->left;
		}else{
			if(st.empty()) break;
			node = st.top();
			st.pop();
			ans.push_back(node->data);
			node = node->right;
		}
	}

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> ans;
	ans = inOrder(root);

	for(auto it: ans)cout << it << " ";
}