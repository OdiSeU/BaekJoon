const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (a, b, c) => ((BigInt(b) - BigInt(c)) / BigInt(a)).toString();

console.log(solution(...input));