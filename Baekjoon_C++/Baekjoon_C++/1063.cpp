#include <iostream>
#include <string>
using namespace std;

struct Vec { int vx, vy; };
string king, stone;

Vec getVec(string move) {
	Vec v;
	if (move == "R") {
		v.vx = 1;
		v.vy = 0;
	}
	else if (move == "L") {
		v.vx = -1;
		v.vy = 0;
	}
	else if (move == "B") {
		v.vx = 0;
		v.vy = -1;
	}
	else if (move == "T") {
		v.vx = 0;
		v.vy = 1;
	}
	else if (move == "RT") {
		v.vx = 1;
		v.vy = 1;
	}
	else if (move == "LT") {
		v.vx = -1;
		v.vy = 1;
	}
	else if (move == "RB") {
		v.vx = 1;
		v.vy = -1;
	}
	else if (move == "LB") {
		v.vx = -1;
		v.vy = -1;
	}
	return v;
}

string getNextPos(string now, Vec move) {
	string pos = now;
	pos[0] += move.vx;
	pos[1] += move.vy;
	if ('A' <= pos[0] && pos[0] <= 'H' && '1' <= pos[1] && pos[1] <= '8') return pos;
	else return now;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	string input, next, before;
	Vec move;
	cin >> king >> stone >> n;
	while (n--) {
		cin >> input;
		before = stone;
		move = getVec(input);
		next = getNextPos(king, move);
		if (next == stone) {
			stone = getNextPos(stone, move);
			if (before != stone) king = next;
		}
		else king = next;
	}
	cout << king << '\n' << stone;
	return 0;	
}