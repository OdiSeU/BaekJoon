const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (a, b) => b - a;

console.log(solution(...input));