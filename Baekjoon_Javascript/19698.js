const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const [N, W, H, L] = input.split(' ').map(v => +v);

const solution = (N, W, H, L) => Math.min(N, (W/L|0)*(H/L|0));

console.log(solution(N, W, H, L));