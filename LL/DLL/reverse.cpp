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

Node* reverseLL(Node* head){
	Node* mover = head;

	while(mover){
		Node* temp = mover->next;
		mover->next = mover->back;
		mover->back = temp;

		if(!mover->back)break;
		mover = mover->back;
	}

	return mover;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	Node* head = arrayToDLL(n, arr);

	Node* reversedHead = reverseLL(head);
	printLL(reversedHead);
}