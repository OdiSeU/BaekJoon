// https://www.acmicpc.net/problem/10811

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N, M], ...input] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, M, input));

function solution(N, M, input) {
    const arr = Array.from(Array(N), (_, i) => i + 1);

    const reverse = (i, j) => {
        for (; i < j; i++, j--) {
            [arr[i], arr[j]] = [arr[j], arr[i]];
        }
    };

    for (const [i, j] of input) {
        reverse(i - 1, j - 1);
    }

    return arr.join(' ');
}
