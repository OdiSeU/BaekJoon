const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const T = +input[0];
const cases = [];

for(let i = 1; i < input.length; i++) {
    let [N, M] = input[i].split(' ').map(v=>+v);
    cases.push(N);
    i += M;
}

const solution = (cases) => cases.map(v => v-1).join('\n');

console.log(solution(cases));