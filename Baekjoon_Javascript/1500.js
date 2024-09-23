const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [S, K] = file.split(' ').map(Number);

console.log(solution(S, K));

function solution(S, K) {
    const [div, mod] = [Math.floor(S / K), S % K];

    return div ** (K - mod) * (div + 1) ** mod;
}
