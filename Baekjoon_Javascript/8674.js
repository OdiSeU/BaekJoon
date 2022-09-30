const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();
const [a, b] = input.split(' ').map(v=>+v);

const solution = (a, b) => Math.min((a%2)*b, (b%2)*a);

console.log(solution(a, b));