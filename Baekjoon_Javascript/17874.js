const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const [n, h, v] = input.split(' ').map(v => +v);

const solution = (n, h, v) => Math.max(h, n - h) * Math.max(v, n - v) * 4;

console.log(solution(n, h, v));