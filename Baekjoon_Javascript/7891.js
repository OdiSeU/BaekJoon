const file = require('fs').readFileSync('/dev/stdin')
const input = file.toString().trim().split('\n');

const solution = (a, b) => +a + +b;

console.log(input.slice(1).map(v => solution(...v.split(' '))).join('\n'));