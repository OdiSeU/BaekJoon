// https://www.acmicpc.net/problem/2979

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[A, B, C], ...times] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(A, B, C, times));

function solution(A, B, C, times) {
    const costs = [0, A, B * 2, C * 3];
    const sums = [0, 0, 0, 0];
    const counts = {};

    for (let [i, j] of times) {
        for (; i < j; i++) {
            counts[i] = (counts[i] || 0) + 1;
        }
    }

    for (const [_, count] of Object.entries(counts)) {
        sums[count] += costs[count];
    }

    return sums.reduce((sum, v) => sum + v, 0);
}
