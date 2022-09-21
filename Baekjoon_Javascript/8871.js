const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (n) => `${(n+1)*2} ${(n+1)*3}`;

console.log(solution(+input));