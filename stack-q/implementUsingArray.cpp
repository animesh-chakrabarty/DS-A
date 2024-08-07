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
	return 0;
}