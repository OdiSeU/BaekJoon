const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');

const [a, b] = input.map(v => +v);

const solution = (a, b) => {
    const m = (b - a) / 400;

    return 1 / (1 + 10**m);
}

console.log(solution(a, b));