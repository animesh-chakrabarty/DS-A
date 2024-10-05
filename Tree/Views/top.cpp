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

vector<int> topView(Node* root){
	vector<int> ans;
	if(!root)return ans;
	
	queue<pair<Node*,int>> q;
	map<int,int> mp;

	q.push({root, 0});

	while(!q.empty()){
		pair<Node*, int> temp;
		temp = q.front();
		q.pop();

		int lineNo = temp.second;
		Node* element = temp.first;

		if(!mp[lineNo])mp[lineNo] = element->data;

		if(element->left)q.push({element->left, lineNo-1});
		if(element->right)q.push({element->right, lineNo+1});		
	}

	for(auto it: mp)ans.push_back(it.second);

	return ans;
}

int main(){
	Node* root = createBT();

	vector<int> view;
	view = topView(root);

	for(auto it: view)cout << it << " ";
}
