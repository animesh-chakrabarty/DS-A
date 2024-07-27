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

// creating Linked List from array
Node* createLL(int n, int arr[]){
	// create head from arr[0]
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

// find length of LL
int length(Node* head){
	int len = 0;
	Node* mover = head;

	while(mover != nullptr){
		len++;
		mover = mover->next;
	}

	return len;
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
	int len = length(head);
	cout << len;
}