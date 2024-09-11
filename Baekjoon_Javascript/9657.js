const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(+file));

function solution(n) {
    const dp = Array(n + 1).fill(0);
    const count = [1, 3, 4];

    for (const i of count) dp[i] = 1;

    for (let i = 5; i <= n; i++) {
        dp[i] = +count.some((x) => !dp[i - x]);
    }

    return ['CY', 'SK'][dp[n]];
}
