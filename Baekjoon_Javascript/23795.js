const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (moneys) => moneys.reduce((acc, v) => acc + +v, 0);

console.log(solution(input.slice(0, -1)));