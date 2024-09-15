const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const lines = file.split('\n').slice(1);

console.log(lines.map(solution).join('\n'));

function solution(str) {
    return [...new Set([...str])].reduce((sum, c) => sum - c.charCodeAt(), 2015);
}
