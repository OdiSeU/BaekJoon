const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (line) => line.split(' ').reduce((acc, v)=> acc + +v, 0);

console.log(input.slice(0,-1).map(v => solution(v)).join('\n'));