const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(BigInt(file)));

function solution(N) {
    let fact = 1n;

    while (N) fact *= N--;

    return `${fact}`;
}
