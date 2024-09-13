const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [A, B, C] = file.split('\n').map(Number);

console.log(solution(A, B, C));

function solution(A, B, C) {
    return [A + B - C, +`${A}${B}` - C].join('\n');
}
