#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int data;
	Node* prev;
	Node(int data, Node* prev) {
		this->data = data;
		this->prev = prev;
	}
};

class Stack {
private:
	int size;
	Node* top;
public:
	Stack() {
		size = 0;
		top = 0;
	}
	void push(int n) {
		Node* node = new Node(n, top);
		top = node;
		size++;
	}
	int pop() {
		if(top==0) return -1;
		int data = top->data;
		delete top;
		top = top->prev;
		size--;
		return data;
	}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		if(top==0) return true;
		else return false;
	}
	int getTop() {
		if(top==0) return -1;
		else return top->data;
	}
};

int main() {
	Stack stack = Stack();
	int testNum;
	cin >> testNum;
	while(testNum--) {
		string cmd;
		cin >> cmd;
		if(cmd=="push") {
			int n;
			cin >> n;
			stack.push(n);
		}
		if(cmd=="pop") cout << stack.pop() << '\n';
		if(cmd=="size") cout << stack.getSize() << '\n';
		if(cmd=="empty") cout << stack.isEmpty() << '\n';
		if(cmd=="top") cout << stack.getTop() << '\n';
	}
	return 0;
}
