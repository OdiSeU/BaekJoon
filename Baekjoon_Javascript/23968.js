const p = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const f = require('fs').readFileSync(p, 'utf-8').trim();

const [[N, K], A] = f.split('\n').map((v) => v.split(' ').map(Number));

console.log(solution(N, K, A));

function solution(N, K, A) {
    let cnt = 0;

    for (let last = N - 1; last > 0; last--) {
        for (let i = 0; i < last; i++) {
            if (A[i] > A[i + 1]) {
                if (++cnt === K) {
                    return `${A[i + 1]} ${A[i]}`;
                }
                [A[i], A[i + 1]] = [A[i + 1], A[i]];
            }
        }
    }

    return -1;
}
