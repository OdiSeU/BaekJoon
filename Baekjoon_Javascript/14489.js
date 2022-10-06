const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [A, B] = input[0].split(' ').map(v=>+v);
const C = +input[1];

const solution = (A, B, C) => {
    let sum = A + B;
    let chicken = C * 2;
    return sum >= chicken ? sum - chicken : sum;
}

console.log(solution(A, B, C));