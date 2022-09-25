const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

class Queue {
    constructor() {
        this.values = {};
        this.head = 0n;
        this.tail = 0n;
    }

    isEmpty = () => this.head === this.tail;

    push = (v) => {
        this.values[this.tail++] = v;
    }

    pop = () => {
        if(this.isEmpty()) return 0;

        let n = this.values[this.head];
        delete this.values[this.head++];

        return n;
    }
}

const solution = (N) => {
    const checks = Array(20001);
    const que = new Queue();
    que.push(['1', 1]);
    checks[1] = '1';

    while(!que.isEmpty()) {
        let now = que.pop();
        if(now[0].length < 100) {
            for(let x of [0, 1]) {
                let next = [now[0]+`${x}`, (now[1] * 10 + x) % N];
                if(checks[next[1]]) continue;
                if(next[1] === 0) return next[0];
                que.push(next);
                checks[next[1]] = next[0];
            }
        }
    }

    return 'BRAK';
}

console.log(input.slice(1).map(v => solution(+v)).join('\n'));