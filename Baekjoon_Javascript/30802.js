const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N], sizes, [T, P]] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, sizes, T, P));

function solution(N, sizes, T, P) {
    const shirt_set = sizes.reduce((sum, x) => sum + Math.ceil(x / T), 0);
    const pen_set = Math.floor(N / P);

    return `${shirt_set}\n${pen_set} ${N % P}`;
}
