const input = require('fs').readFileSync('/dev/stdin').toString().trim();

class Queue {
    constructor() {
        this.values = {};
        this.head = 0;
        this.tail = 0;
    }

    isEmpty = () => this.head === this.tail

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

const solution = (n) => {
    let now, len, que = new Queue();
    let visited = new Set([n]);
    que.push([n]);

    while(!que.isEmpty()) {
        now = que.pop();
        len = now.length;
        let last = now[len-1];
        if(last === 1) break;

        for(let i=2; i<=3; i++) {
            if(last % i == 0) {
                x = last / i;
                if(!visited.has(x)) {
                    visited.add(x);
                    que.push([...now, x]);
                }
            }
        }

        if(!visited.has(last-1)) {
            visited.add(last-1);
            que.push([...now, last-1]);
        }
    }

    return (len-1) + '\n' + now.join(' ');
}

console.log(solution(+input));