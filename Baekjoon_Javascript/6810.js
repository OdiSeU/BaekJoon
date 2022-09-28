const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [a, b, c] = input.map(v=>+v);

const solution = (a, b, c) => 'The 1-3-sum is ' + (91 + a + b*3 + c);

console.log(solution(a, b, c));