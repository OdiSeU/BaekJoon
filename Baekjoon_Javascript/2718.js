const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const memoi = [1, 5, 11, 36];

const solution = (N) => {
    for(let i = memoi.length; i < N; i++) {
        memoi.push(memoi[i-1] + 5 * memoi[i-2] + memoi[i-3] - memoi[i-4]);
    }
    return memoi[N-1];
}

console.log(input.slice(1).map(v => solution(+v)).join('\n'));