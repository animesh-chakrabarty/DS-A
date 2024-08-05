#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* back;

public:
	Node(int data){
		this->data = data;
		this->next = nullptr;
		this->back = nullptr;
	}
};

Node* arrayToDLL(int n, int arr[]){
	Node* head = new Node(arr[0]);
	Node* mover = head;

	for (int i = 1; i < n; ++i)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		temp->back = mover;
		mover = mover->next;
	}

	return head;
}

void printLL(Node* head){
	Node* mover = head;

	while(mover){
		cout << mover->data << " ";
		mover = mover->next; 
	}
}

// delete head 
Node* deleteHead(Node* head){
	Node* newHead = head->next;

	return newHead;
}

// delete tail
void deleteTail(Node* head){
	Node* mover = head;

	while(mover->next->next){
		mover = mover->next;
	}

	mover->next = nullptr;

	return;
}

// delete node from user defined index
Node* deleteIndex(Node* head, int index){
	int count = 0;
	Node* mover = head;

	if(index == 0){
		Node* newHead = head->next;
		return newHead;
	}

	while(count != index){
		mover = mover->next;
		count++;

		if(!mover){
			cout << "index is greater than the length of the LL" <<endl;
			return head;
		}
	}

	mover->back->next = mover->next;
	if(mover->next){
		mover->next->back = mover->back;
	}

	return head;
}

Node* deleteValue(Node* head, int value){
	if(head->data == value){
		Node* newHead = head->next;
		return newHead;
	}

	Node* mover = head;

	while(mover->data != value){
		mover = mover->next;

		if(!mover){
			cout << "The value is not present in the DLL" << endl;
			return head;
		}
	}

	mover->back->next = mover->next;
	if(mover->next){
		mover->next->back = mover->back;
	}

	return head;
}

// delete node with a particular value

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	Node* head = arrayToDLL(n, arr);
	printLL(head);

	cout << endl;
	Node* newHead1 = deleteHead(head);
	printLL(newHead1);

	cout << endl;
	deleteTail(newHead1);
	printLL(newHead1);

	cout << endl;
	Node* newHead2 = deleteIndex(newHead1,0);
	printLL(newHead2);

	cout << endl;
	Node* newHead3 = deleteValue(newHead2,45);
	printLL(newHead3);
}