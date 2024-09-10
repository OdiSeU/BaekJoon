// https://www.acmicpc.net/problem/1041

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N], nums] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, nums));

function solution(N, nums) {
    const sum = (arr) => arr.reduce((acc, v) => acc + v, 0);

    const side2 = ['01', '02', '03', '04', '12', '13', '15', '24', '25', '34', '35', '45'];
    const side3 = ['012', '013', '024', '034', '125', '135', '245', '345'];

    const sums2 = side2.map((side) => sum([...side].map((i) => nums[i])));
    const sums3 = side3.map((side) => sum([...side].map((i) => nums[i])));

    const min1 = Math.min(...nums);
    const min2 = Math.min(...sums2);
    const min3 = Math.min(...sums3);

    if (N === 1) return sum(nums) - Math.max(...nums);
    if (N === 2) return (min3 + min2) * 4;

    let result = min3 * 4;
    result += min2 * ((N - 2) * 8 + 4);
    result += min1 * ((N - 2) * (N - 2) * 5 + (N - 2) * 4);

    return result;
}
