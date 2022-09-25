const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (lines) => lines.map((v, i) => `${i+1}. ${v}`).join('\n');

console.log(solution(input.slice(1)));