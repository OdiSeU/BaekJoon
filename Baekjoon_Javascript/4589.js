const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (nums) => {
    let sort = nums[0] > nums[1] ? (a,b)=>b-a : (a,b)=>a-b;
    let sorted = nums.slice().sort(sort);
    for(let i = 0; i < nums.length; i++) {
        if(nums[i] !== sorted[i]) return 'Unordered';
    }
    return 'Ordered';
};

console.log(`Gnomes:\n${input.slice(1).map(v => solution(v.split(' ').map(v=>+v))).join('\n')}`);