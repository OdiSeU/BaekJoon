const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const [K, N] = input[0].split(' ').map(v => +v);

const solution = (N, nums) => {
    let counts = new Map();
    let maxNum = 0;
    nums.forEach(v => {
        v = v.trim();
        counts.set(v, (counts.get(v) | 0) + 1);
        maxNum = `${Math.max(+maxNum, +v)}`;
    });
    counts.set(maxNum, (counts.get(maxNum) | 0) + N - nums.length);
    
    let keys = [...counts.keys()];
    let sorted = keys.sort((a, b) => BigInt(b+a) > BigInt(a+b) ? 1 : -1);
    let repeated = sorted.map(v => v.repeat(counts.get(v)));

    return repeated.join('');
}

console.log(solution(N, input.slice(1)));