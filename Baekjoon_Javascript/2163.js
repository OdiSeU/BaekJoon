let input = require('fs').readFileSync('/dev/stdin').toString();

let [N, M] = input.split(' ').map(v=>+v);

console.log(N * M - 1);