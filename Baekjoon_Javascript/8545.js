const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (str) => [...str].reverse().join('');

console.log(solution(input));