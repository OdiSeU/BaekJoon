const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (lines) => lines.map((_, i) => `Case ${i+1}: Sorting... done!`).join('\n');

console.log(solution(input.slice(0,-1)));