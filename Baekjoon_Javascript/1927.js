// https://www.acmicpc.net/problem/1927

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [n, ...commands] = file.split('\n').map(Number);

console.log(solution(commands));

function solution(commands) {
    const outputs = [];
    const mHeap = new MinHeap();

    for (const cmd of commands) {
        cmd ? mHeap.push(cmd) : outputs.push(mHeap.pop(cmd) || 0);
    }

    return outputs.join('\n');
}

function MinHeap() {
    const heap = [];

    this.size = function () {
        return heap.length;
    };

    this.peek = function () {
        return this.size() ? heap[0] : null;
    };

    this.pop = function () {
        if (this.size() === 0) return null;
        if (this.size() === 1) return heap.pop();

        const min = heap[0];
        heap[0] = heap.pop();

        if (this.size() > 1) {
            for (let now = 0, child; ; now = child) {
                child = 2 * now + 1;

                if (child >= this.size()) break;
                if (child + 1 < this.size() && heap[child] > heap[child + 1]) child++;
                if (heap[now] < heap[child]) break;

                [heap[now], heap[child]] = [heap[child], heap[now]];
            }
        }

        return min;
    };

    this.push = function (value) {
        heap.push(value);
        for (let now = this.size() - 1, parent; now > 0; now = parent) {
            parent = Math.floor((now - 1) / 2);

            if (heap[now] >= heap[parent]) break;

            [heap[now], heap[parent]] = [heap[parent], heap[now]];
        }
    };
}
