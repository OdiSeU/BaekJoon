const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const nums = input[1].split(' ').map(v=>+v);
const x = +input[2];

const solution = (nums, x) => {
    let sorted = nums.filter(v => v <= x).sort((a, b) => a - b);
    let l = 0, r = sorted.length-1;
    let answer = 0, sum;

    while(l !== r) {
        sum = sorted[l] + sorted[r];
        if(sum === x) answer++;
        if(sum < x) l++;
        else r--;
    }
    
    return answer;
}

console.log(solution(nums, x));