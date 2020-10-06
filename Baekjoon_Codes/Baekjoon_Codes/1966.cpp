#include <iostream>
using namespace std;
class PriorityQueue {
private:
	int* queue;
	int length;
	int pointer;
	int outCnt;
	int maxPrior;
public:
	PriorityQueue(int* queue, int length) {
		this->queue = queue;
		this->length = length;
		maxPrior = 9;
		pointer = outCnt = 0;
	}
  //포인터 n을 queue 크기에 맞게 변환
	int toIndex(int n) {
		return (n+length)%length;
	}
  //우선순위에 맞는 시작 인덱스 반환
	int getStartPoint(int prior) {
		if(prior==maxPrior) return 0; //입력이 최대 우선순위이면 0반환
		int i, stdPt;                 //입력이 최대 우선순위가 아닐경우
		i = stdPt = toIndex(getStartPoint(prior+1)-1); //입력+1 우선순위의 마지막 인덱스 -1 부터
		do {
			if(queue[i]==prior+1) return toIndex(i+1); // lastof 입력 우선순위 인덱스 반환
			i = toIndex(i-1);
		} while(i!=stdPt); 
		return toIndex(i+1); //입력 우선순위 요소가 없을 경우 입력+1 우선순위의 마지막 인덱스 반환
	}
  // index의 요소이 몇번째로 출력되는지 반환
	int whenItemOut(int index) {
		int prior = queue[index];
		for(int i=0; i<length; i++)	if(queue[i]>prior) outCnt++;
		for(int i=getStartPoint(prior);;i=toIndex(i+1)) {
			if(queue[i]==prior) {
				outCnt++;
				if(i==index) return outCnt;
			}
		}
	}
};

int main() {
	int testNum;
	cin >> testNum;
	while(testNum--) {
		int length, index;
		cin >> length >> index;
		int* inputArr = new int[length];
		for(int i=0; i<length; i++) {
			cin >> inputArr[i];
		}
		
		PriorityQueue pQueue = PriorityQueue(inputArr, length);
		cout << pQueue.whenItemOut(index) << '\n';
	}
	return 0;
}
