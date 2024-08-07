#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int value){
		data = value;
		next = nullptr;
	}
};

class StackImp{
public:
	int top = -1;
	Node* head;

	// push - insert value 
	void push(int value){
		Node* temp = new Node(value);

		// if stack is empty
		if(top == -1){
			top++;
			head = temp;
			return;
		}

		// if stack is not empty
		Node* mover = head;
		while(mover->next) mover = mover->next;

		mover->next = temp;
		top++;
		return;
	}

	// pop - pop out last element
	void pop(){
		// check is stack is empty
		if(top == -1){
			cout << "no element in stack to pop";
			return;
		}

		// if stack is not empty
		Node* mover = head;
		while(mover->next->next)mover = mover->next;

		delete mover->next;
		mover->next = nullptr;
		top--;
	}

	// topElement - return top element
	int topElement(){
		Node* mover = head;

		while(mover->next) mover = mover->next;

		return mover->data;
	}

	// size
	int size(){
		return top+1;
	}
};

int main(){
	StackImp* st = new StackImp();
	st->push(10);
	st->push(11);
	st->push(12);
	cout << st->size() << " ";
	st->pop();
	cout << st->topElement() << " ";
	st->push(90);
	cout << st->topElement() << " ";
	cout << st->size() << " ";
	st->pop();
	cout << st->size() << " ";

	delete st;

	cout << endl;

	// QueueImp* q = new QueueImp();
	// q->push(10);
	// q->push(11);
	// q->push(12);
	// cout << q->size() << " ";
	// q->pop();
	// cout << q->topElement() << " ";
	// q->push(90);
	// cout << q->topElement() << " ";
	// q->pop();
	// cout << q->size() << " ";
	// cout << q->topElement() << " ";

	// delete q;
	return 0;
}