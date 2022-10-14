const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');

const [A, B, C] =input.map(v => +v);

const solution = (A, B, C) => {
    let cnt = [0, 0];
    [A, B, C].forEach(v => cnt[v]++);
    
    if(cnt[0] === 0 || cnt[0] === 3) return '*';
    if(cnt[0] === 1) {
        if(A === 0) return 'A';
        if(B === 0) return 'B';
        if(C === 0) return 'C';
    }
    if(cnt[1] === 1) {
        if(A === 1) return 'A';
        if(B === 1) return 'B';
        if(C === 1) return 'C';
    }
}

console.log(solution(A, B, C));