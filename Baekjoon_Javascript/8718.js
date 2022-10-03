const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');
const [x, k] = input.map(v => +v);

const solution = (x, k) => {
    if(x >= k*7) return 7000*k;
    if(x >= k*3.5) return 3500*k;
    if(x >= k*1.75) return 1750*k;
    return 0;
}

console.log(solution(x, k));