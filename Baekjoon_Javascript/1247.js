const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (nums) => {
    const sum = nums.reduce((acc, v) => acc + v, 0n);
    if(sum > 0n) return '+';
    if(sum < 0n) return '-';
    return '0';
}

let idx = 0;
let answers = [];

for(let i = 0; i < 3; i++) {
    let n = +input[idx++];
    let nums = input.slice(idx, idx+n).map(v => BigInt(v));
    
    answers.push(solution(nums));
    idx += n;
}

console.log(answers.join('\n'));