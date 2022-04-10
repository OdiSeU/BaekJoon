let input = require('fs').readFileSync('/dev/stdin').toString();

let N = +input, answer = 0;

for(let i = 1; i <= N; i++)
    answer += (N / i | 0) * i; 

console.log(answer);