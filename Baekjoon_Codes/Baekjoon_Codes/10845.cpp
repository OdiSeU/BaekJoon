#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int data, Node* next) {
		this->data = data;
		this->next = next;
	}
};

class Queue {
private:
	int size;
	Node* front;
	Node* back;
public:
	Queue() {
		size = 0;
		front = back = 0;
	}
	void push(int n) {
		Node* node = new Node(n, 0);
		if(front==0) front = node;
		else back->next = node;
		back = node;
		size++;
	}
	int pop() {
		if(front==0) return -1;
		int data = front->data;
		delete front;
		front = front->next;
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
	Queue queue = Queue();
	int testNum;
	cin >> testNum;
	while(testNum--) {
		string cmd;
		cin >> cmd;
		if(cmd=="push") {
			int n;
			cin >> n;
			queue.push(n);
		}
		if(cmd=="pop") cout << queue.pop() << '\n';
		if(cmd=="size") cout << queue.getSize() << '\n';
		if(cmd=="empty") cout << queue.isEmpty() << '\n';
		if(cmd=="front") cout << queue.getFront() << '\n';
		if(cmd=="back") cout << queue.getBack() << '\n';
	}
	return 0;
}
