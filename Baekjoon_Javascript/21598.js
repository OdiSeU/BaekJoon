const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');

const solution = (N) => 'SciComLove\n'.repeat(N);

console.log(solution(+input));