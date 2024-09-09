// https://www.acmicpc.net/problem/10813

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const lines = file.split('\n').map((line) => line.split(' ').map(Number));

const [[N, M], ...inputs] = lines;

console.log(solution(N, M, inputs));

function solution(N, M, inputs) {
    const arr = Array.from(Array(N), (_, i) => i + 1);

    for (const [x, y] of inputs) {
        [arr[x - 1], arr[y - 1]] = [arr[y - 1], arr[x - 1]];
    }

    return arr.join(' ');
}
