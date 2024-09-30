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

// using 2 stack + vector for storing ans
// TC - O(2N) = O(N)
// SC - O(2N) = O(N)
vector<int> postOrderUsing2Stack(Node* root){
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

// using 1 stack + vector for storing ans 
// TC - O(N + N/2) = O(N)
// SC - O(N)
vector<int> postOrderUsing1Stack(Node* root){
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
	ans = postOrderUsing2Stack(root);

	for(auto it: ans)cout << it << " ";

	vector<int> ans2;
	ans2 = postOrderUsing1Stack(root);

	for(auto it: ans2)cout << it << " ";

	cout << endl;
}