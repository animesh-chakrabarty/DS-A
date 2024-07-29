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

// insertion at head
Node* insertAtHead(Node* head, int value){
	Node* temp = new Node(value);

	temp->next = head;
	
	return temp;
}

// insertion at tail
void insertAtTail(Node* head, int value){
	Node* mover = head;
	Node* temp = new Node(value);

	while(mover->next){
		mover = mover->next;
	}

	mover->next = temp;
}

// insertion at user-defined index
Node* insertAtIndex(Node* head, int value, int index){
	Node* temp = new Node(value);
	Node* mover = head;

	if(index == 0){
		temp->next = head;
		return temp;
	}

	while(index > 1){
		// EDGE CASE: if index > LL size
		if(!mover->next){
			mover->next = temp;
			return head;
		}
		mover = mover->next;
		index--;
	}

	temp->next = mover->next;
	mover->next = temp;

	return head;
}

// insertion before an user-defined element
Node* insertBeforeAnElement(Node* head, int before, int value){
	Node* mover = head;
	Node* temp = new Node(value);

	if(head->data == before){
		temp->next = head;
		return temp;
	}

	while(mover->next->data != before){
		mover = mover->next;
	}

	temp->next = mover->next;
	mover->next = temp;
	return head;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	Node* head = createLL(n, arr);
	// traverseLL(head);

	// insertion at head
	// Node* newHead = insertAtHead(head, 90);
	// traverseLL(newHead);

	// insertion at tail
	// insertAtTail(head, 50);
	// traverseLL(head);

	// insert at a user defined index
	// Node* newHead = insertAtIndex(head, 900, 4);
	// traverseLL(newHead);

	// insert before a user defined element
	Node* newHead = insertBeforeAnElement(head, 78, 900);
	traverseLL(newHead);
}

