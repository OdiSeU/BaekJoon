// https://www.acmicpc.net/problem/1655

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const [_, ...nums] = file.split('\n').map(Number);

function Heap() {
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

        const root = heap[0];
        heap[0] = heap.pop();

        if (this.size() > 1) {
            for (let now = 0, child; ; now = child) {
                child = 2 * now + 1;

                if (child >= this.size()) break;
                if (child + 1 < this.size() && this.compare(heap[child], heap[child + 1])) child++;
                if (!this.compare(heap[now], heap[child])) break;

                [heap[now], heap[child]] = [heap[child], heap[now]];
            }
        }

        return root;
    };

    this.push = function (value) {
        heap.push(value);
        for (let now = this.size() - 1, parent; now > 0; now = parent) {
            parent = Math.floor((now - 1) / 2);

            if (!this.compare(heap[parent], heap[now])) break;

            [heap[now], heap[parent]] = [heap[parent], heap[now]];
        }
    };

    this.compare = function (parent, child) {
        return parent > child;
    };
}

function MinHeap() {
    Heap.call(this);

    this.compare = function (parent, child) {
        return parent > child;
    };
}

function MaxHeap() {
    Heap.call(this);

    this.compare = function (parent, child) {
        return parent < child;
    };
}

MaxHeap.prototype = Object.create(Heap.prototype);
MaxHeap.prototype.constructor = MaxHeap;
MinHeap.prototype = Object.create(Heap.prototype);
MinHeap.prototype.constructor = MinHeap;

console.log(solution(nums));

function solution(nums) {
    const result = [];
    const maxHeap = new MaxHeap();
    const minHeap = new MinHeap();

    for (const n of nums) {
        maxHeap.size() > minHeap.size() ? minHeap.push(n) : maxHeap.push(n);
        const [max, min] = [maxHeap.peek(), minHeap.peek()];

        if (maxHeap.size() && minHeap.size() && max > min) {
            maxHeap.pop();
            minHeap.pop();
            maxHeap.push(min);
            minHeap.push(max);
        }
        result.push(maxHeap.peek());
    }

    return result.join('\n');
}
