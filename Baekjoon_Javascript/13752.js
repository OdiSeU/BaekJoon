const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const nums = file.split('\n').slice(1).map(Number);

console.log(solution(nums));

function solution(nums) {
    return nums.map((v) => '='.repeat(v)).join('\n');
}
