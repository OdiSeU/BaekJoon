// https://www.acmicpc.net/problem/2559

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N, K], nums] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, K, nums));

function solution(N, K, nums) {
    let max = (sum = nums.slice(0, K).reduce((acc, v) => acc + v, 0));

    for (let i = K; i < N; i++) {
        sum += nums[i] - nums[i - K];
        max = Math.max(max, sum);
    }

    return max;
}
