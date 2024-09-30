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

// post order traversal using 2 stack (storing values in vector)
vector<int> postOrder2(Node* root){
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

// post order traversal using 1 stack (storing values in vector)
vector<int> postOrder(Node* root){
	stack<Node*> st1;
	vector<int> ans;

	st1.push(root);

	while(!st1.empty()){
		Node* temp = st1.top();
		st1.pop();

		ans.push_back(temp->data);

		if(temp->left)st1.push(temp->left);
		if(temp->right)st1.push(temp->right);
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> ans;
	ans = postOrder(root);

	for(auto it: ans)cout << it << " ";

	cout << endl;

	vector<int> ans2;
	ans2 = postOrder2(root);

	for(auto it: ans2)cout << it << " ";
}