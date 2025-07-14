const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(Number(file)));

function solution(N) {
    let result = [];

    result.push('@'.repeat(N + 2));
    for (let i = 0; i < N; i++) result.push('@' + ' '.repeat(N) + '@');
    result.push('@'.repeat(N + 2));

    return result.join('\n');
}
