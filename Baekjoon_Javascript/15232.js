const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const [R, C] = file.split('\n').map(Number);

console.log(solution(R, C));

function solution(R, C) {
    return Array(R).fill('*'.repeat(C)).join('\n');
}
