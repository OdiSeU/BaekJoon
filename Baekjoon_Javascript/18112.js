const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');
const [a, b] = input.map(v => parseInt(v, 2));

class Queue {
    constructor() {
        this.values = {};
        this.head = 0;
        this.tail = 0;
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

const solution = (a, b) => {
    const check = new Set();
    const que = new Queue();
    let answer = 0;

    check.add(a);
    que.push([a, 0]);

    while(!que.isEmpty()) {
        let [now, cnt] = que.pop();
        
        if(now === b) {
            answer = cnt;
            break;
        }
        for(let i = 0; i < now.toString(2).length-1; i++) {
            let next = now ^ (1 << i);
            if(!check.has(next)) {
                check.add(next);
                que.push([next, cnt+1]);
            }
        }
        if(now + 1 < 1024 && !check.has(now + 1)) {
            check.add(now + 1);
            que.push([now + 1, cnt+1]);
        }
        if(now > 0 && !check.has(now - 1)) {
            check.add(now - 1);
            que.push([now - 1, cnt+1]);
        }
    }

    return answer;
}

console.log(solution(a, b));