#include<bits/stdc++.h>
using namespace std;

class StackImp{
public:
	int top = -1;
	int st[10];

	// push
	void push(int x){
		top++;
		st[top] = x;
	}
	// pop
	void pop(){
		top--;
	}
	// top
	int topElement(){
		return st[top];
	}
	// size
	int size(){
		return top+1;
	}
};

class QueueImp{
public: 
	int start = -1;
	int end = -1;
	int currentSize = 0;
	int q[10];

	// push
	void push(int x){
		// if max capacity is reached
		if(currentSize >= 10){
			cout << "queue reached it's max capacity" << endl;
			return ;
		}
		// if queue is empty
		if(currentSize == 0){
			start++;
			end++;
			q[end] = x;
			currentSize++;
			return;
		}
		end++;
		q[end] = x;
		currentSize++;
	}
	// pop
	void pop(){
		if(currentSize == 0){
			cout << "no element in queue to pop" << endl;
			return;
		}

		start++;
		currentSize--;
	}
	// top
	int topElement(){
		return q[start];
	}

	// size
	int size(){
		return currentSize;
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
	st->pop();
	cout << st->size() << " ";

	delete st;

	cout << endl;

	QueueImp* q = new QueueImp();
	q->push(10);
	q->push(11);
	q->push(12);
	cout << q->size() << " ";
	q->pop();
	cout << q->topElement() << " ";
	q->push(90);
	cout << q->topElement() << " ";
	q->pop();
	cout << q->size() << " ";
	cout << q->topElement() << " ";

	delete q;
	
	return 0;
}