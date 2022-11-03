const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (n) => Array.from(Array(n), (_, i) => '*'.repeat(i+1)).join('\n');

console.log(input.map(v => solution(+v)).join('\n'));