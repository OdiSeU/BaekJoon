#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int data;
	Node* prev;
	Node* next;
	Node(int data, Node* prev, Node* next) {
		this->data = data;
		this->prev = prev;
		this->next = next;
	}
};

class Deque {
private:
	int size;
	Node* front;
	Node* back;
public:
	Deque() {
		size = 0;
		front = back = 0;
	}
	void pushFront(int n) {
		Node* node = new Node(n, 0, front);
		if(size==0) back = node;
		else front->prev = node;
		front = node;
		size++;
	}
	void pushBack(int n) {
		Node* node = new Node(n, back, 0);
		if(size==0) front = node;
		else back->next = node;
		back = node;
		size++;
	}
	int popFront() {
		if(size==0) return -1;
		int data = front->data;
		delete front;
		front = front->next;
		size--;
		return data;
	}
	int popBack() {
		if(size==0) return -1;
		int data = back->data;
		delete back;
		back = back->prev;
		size--;
		return data;
	}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		return size==0;
	}
	int getFront() {
		if(size==0) return -1;
		else return front->data;
	}
	int getBack() {
		if(size==0) return -1;
		else return back->data;
	}
};

int main() {
	Deque deque = Deque();
	int testNum;
	cin >> testNum;
	while(testNum--) {
		string cmd;
		cin >> cmd;
		if(cmd=="push_front") {
			int n;
			cin >> n;
			deque.pushFront(n);
		}
		if(cmd=="push_back") {
			int n;
			cin >> n;
			deque.pushBack(n);
		}
		if(cmd=="pop_front") cout << deque.popFront() << '\n';
		if(cmd=="pop_back") cout << deque.popBack() << '\n';
		if(cmd=="size") cout << deque.getSize() << '\n';
		if(cmd=="empty") cout << deque.isEmpty() << '\n';
		if(cmd=="front") cout << deque.getFront() << '\n';
		if(cmd=="back") cout << deque.getBack() << '\n';
	}
	return 0;
}
