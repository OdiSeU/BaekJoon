const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(+file));

function solution(n) {
    return ['SK', 'CY'][n % 2];
}
