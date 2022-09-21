const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (a, b) => a * 8 + b * 3 - 28;

console.log(solution(...input));