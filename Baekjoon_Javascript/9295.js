const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (i, line) => 'Case ' + i + ': ' + line.split(' ').reduce((acc, i) => acc + +i, 0);

console.log(input.slice(1).map((v, i) => solution(i+1, v)).join('\n'));