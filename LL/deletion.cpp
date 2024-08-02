#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
	int data;
	Node* next;

public:
	Node(int data){
		this->data = data;
		this->next = nullptr;
	}
};

Node* createLL(int n, int arr[]){
	Node* head = new Node(arr[0]);
	Node* mover = head;

	for (int i = 1; i < n; ++i)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}

	return head;
}

void traverseLL(Node* head){
	Node* mover = head;
	while(mover){
		cout << mover->data << " ";
		mover = mover->next; 
	}
}

// delete head
Node* deleteHead(Node* head){
	
}

// delete tail

// delete node from a user-defined index

// delete node after a user-defined value

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	Node* head = createLL(n, arr);
	traverseLL(head);
}