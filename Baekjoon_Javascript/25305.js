const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [N, k] = input[0].split(' ').map(v => +v);
const scores = input[1].split(' ').map(v => +v);

const solution = (k, scores) => {
    scores.sort((a, b) => b - a);
    return scores[k-1];
}

console.log(solution(k, scores));