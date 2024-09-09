// https://www.acmicpc.net/problem/10810

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const lines = file.split('\n').map((line) => line.split(' ').map(Number));

const [[N, M], ...inputs] = lines;

console.log(solution(N, M, inputs));

function solution(N, M, inputs) {
    const arr = Array(N).fill(0);

    for (const [from, to, x] of inputs) {
        for (let i = from - 1; i < to; i++) {
            arr[i] = x;
        }
    }

    return arr.join(' ');
}
