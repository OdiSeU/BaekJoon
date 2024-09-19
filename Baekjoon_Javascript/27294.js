const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [T, S] = file.split(' ').map(Number);

console.log(solution(T, S));

function solution(T, S) {
    return 12 <= T && T <= 16 && !S ? 320 : 280;
}
