const input = require('fs').readFileSync('/dev/stdin').toString();

const solution = (n) => Math.floor((Math.sqrt(1 + 8 * n) - 1) / 2);

console.log(solution(+input));