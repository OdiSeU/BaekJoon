const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N, k], tabs] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, tabs));

function solution(N, tabs) {
    return tabs.reduce((sum, v) => sum + Math.floor((v + 1) / 2), 0) >= N ? 'YES' : 'NO';
}
