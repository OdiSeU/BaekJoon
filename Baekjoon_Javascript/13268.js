// https://www.acmicpc.net/problem/13268

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(file));

function solution(input) {
    const n = +input.slice(-2) / 5;

    if (n === 0) return 0;

    for (let i = 1; i <= 4; i++) {
        if (n < i * (i + 1)) {
            return i - Math.floor(Math.abs(n - i * i));
        }
    }
}
