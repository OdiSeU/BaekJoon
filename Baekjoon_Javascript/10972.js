// https://www.acmicpc.net/problem/10972

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N], input] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, input));

function solution(N, input) {
    let [i, j] = [N - 2, N - 1];

    while (i >= 0 && input[i] >= input[i + 1]) i--;

    if (i < 0) return -1;

    while (input[i] >= input[j]) j--;

    [input[i], input[j]] = [input[j], input[i]];

    return [...input.slice(0, i + 1), ...input.slice(i + 1).sort((a, b) => a - b)].join(' ');
}
