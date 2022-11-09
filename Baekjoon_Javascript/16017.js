const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (nums) => {
    if(nums[0] > 7 && nums[3] > 7 && nums[1] === nums[2]) return 'ignore';
    return 'answer';
}

console.log(solution(input.map(v=>+v)));