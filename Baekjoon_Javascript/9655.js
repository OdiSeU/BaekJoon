const input = require('fs').readFileSync('/dev/stdin').toString();

const solution = (N) => N % 2 ? 'SK' : 'CY';

console.log(solution(+input));