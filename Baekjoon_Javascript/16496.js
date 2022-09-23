const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (nums) => {
    nums.sort((a,b)=>+(b+a)-(a+b));
    let n = nums.reduce((acc, i)=>acc + i);
    return n[0] === '0' ? '0' : n;
}

console.log(solution(input[1].split(' ')))