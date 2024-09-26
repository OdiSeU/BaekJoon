const p = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const f = require('fs').readFileSync(p, 'utf-8').trim();

const lines = f.split('\n');
const [N, K] = lines[0].split(' ').map(Number);
const nums = lines.slice(1).map(Number);

console.log(solution(N, K, nums));

function solution(N, K, nums) {
    nums.sort((a, b) => a - b);

    const sliced = nums.slice(K, N - K);
    const sum = sliced.reduce((acc, v) => acc + v, 0);

    const trimmed = sum / (N - 2 * K);
    const adjusted = (sum + K * (sliced.at(0) + sliced.at(-1))) / N;

    return [trimmed, adjusted].map((v) => (v + 1e-8).toFixed(2)).join('\n');
}
