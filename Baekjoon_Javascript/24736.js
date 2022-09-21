const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (t, f, s, p, c) => t*6 + f*3 + s*2 + p*1 + c*2;

console.log(input.map(v => solution(...v.split(' '))).join('\n'));