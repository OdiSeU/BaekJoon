const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [N, ...nums] = file.split('\n').map(Number);

console.log(solution(N, nums));

function solution(N, nums) {
    nums.sort((a, b) => a - b);
    const mean = () => {
        const sum = nums.reduce((acc, n) => acc + n, 0);

        return Math.round(sum / N);
    };
    const median = () => {
        return nums[(N - 1) / 2];
    };
    const mode = () => {
        const counts = {};
        let max = 0;
        let x = null;

        for (const n of nums) {
            counts[n] = (counts[n] || 0) + 1;
            max = Math.max(max, counts[n]);
        }

        for (let i = -4000; i <= 4000; i++) {
            if (counts[i] === max) {
                const tmp = x;
                x = i;
                if (tmp !== null) break;
            }
        }

        return x;
    };
    const range = () => {
        let [min, max] = [Infinity, -Infinity];

        for (const n of nums) {
            min = Math.min(min, n);
            max = Math.max(max, n);
        }

        return max - min;
    };

    return [mean(), median(), mode(), range()].join('\n');
}
