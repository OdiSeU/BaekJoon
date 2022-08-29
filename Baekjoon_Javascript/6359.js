let input = require('fs').readFileSync('/dev/stdin').toString().trim();

let [T, ...cases] = input.split('\n').map(v=>+v);

const solution = (n) => Math.floor(Math.sqrt(n));

console.log(cases.map(v => solution(v)).join('\n'));