const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (a, b) => +a + +b;

console.log(solution(...input.split(' ')))