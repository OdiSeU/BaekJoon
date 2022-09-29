const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const [A, K] = input.split(' ').map(v => +v);

const solution = (A, K) => {
    if(A > K/2) return K-A;
    return K & 1 ? solution(A, K-1) + 1 : solution(A, K/2) + 1;
}

console.log(solution(A, K));