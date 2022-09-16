const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const scores = input.map(v=>+v);

const solution = (scores) => {
    let sum = 0;
    let checks = Array(5);
    let sorted = scores.map((v, i) => [v, i]).sort((a, b)=>b[0]-a[0]);

    sorted.slice(0,5).forEach(v => {
        sum += v[0];
        checks[v[1]] = v[1]+1;
    });

    return sum + '\n' + checks.filter(v=>v).join(' ');
} 

console.log(solution(scores));