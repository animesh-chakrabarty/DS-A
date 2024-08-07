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

// Implementation of stack 
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

	// size - return size of the stack
	int size(){
		return top+1;
	}
};

// Implementation of Queue
class QueueImp{
public:
	Node* frontptr = nullptr;
	Node* backptr = nullptr;
	int length = 0;

	// push - insert element
	void push(int value){
		Node* temp = new Node(value);

		// if queue is empty
		if(length == 0){
			frontptr = temp;
			backptr = temp;
			length++;
			return;
		}

		// if queue is not empty
		backptr->next = temp;
		backptr = temp;
		length++;
		return;
	}

	// pop - remove element from front 
	void pop(){
		// if queue is empty
		if(length == 0){
			cout << "no element inside queue to remove"<< endl;
			return;
		}
		// if queue is not empty
		frontptr = frontptr->next;

		length--;
		return;
	}

	// front - returns the front element 
	int front(){
		if(length == 0){
			cout << "queue is empty" << endl;
			return -1;
		}

		return frontptr->data;
	}

	// back - returns the back element
	int back(){
		if(length == 0){
			cout << "queue is empty" << endl;
			return -1;
		}

		return backptr->data;
	}

	// size - returns the size of the queue
	int size(){
		return length;
	}

	// empty - checks is stack is empty or not
	bool empty(){
		return length == 0;
	}
};

int main(){

	// Stack Operations 
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

	// Queue Operations 
	QueueImp* q = new QueueImp();
	q->push(10);
	q->push(11);
	q->push(12);
	cout << q->front() << " ";
	cout << q->back() << " ";
	cout << q->size() << " ";
	q->pop();
	cout << q->front() << " ";
	cout << q->back() << " ";
	q->push(90);
	cout << q->front() << " ";
	cout << q->back() << " ";
	cout << q->size() << " ";
	q->pop();
	cout << q->size() << " ";
	cout << q->front() << " ";
	cout << q->back() << " ";

	delete q;

	return 0;
}