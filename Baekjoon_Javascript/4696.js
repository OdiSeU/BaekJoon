const file = require('fs').readFileSync('/dev/stdin')
const input = file.toString().trim().split('\n');

const solution = (n) => (1+n+n**2+n**3+n**4).toFixed(2);

console.log(input.slice(0,-1).map(v => solution(+v)).join('\n'));