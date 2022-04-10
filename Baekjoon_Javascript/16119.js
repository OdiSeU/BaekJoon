let input = require('fs').readFileSync('/dev/stdin').toString();

let [N, M] = input.split(' ').map(v=>+v);
let answer = BigInt(N) * BigInt(M) / 2n;

console.log(answer.toString());