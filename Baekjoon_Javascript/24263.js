const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (n) => `${n}\n1`;

console.log(solution(input));