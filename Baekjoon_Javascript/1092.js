const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N], cranes, [M], boxes] = file.split('\n').map((line) => line.split(' ').map(Number));

console.log(solution(N, cranes, M, boxes));

function solution(N, cranes, M, boxes) {
    cranes.sort((a, b) => b - a);
    boxes.sort((a, b) => b - a);

    const times = new Array(N).fill(0);

    for (const box of boxes) {
        let [min, idx] = [Infinity, -1];

        for (let i = 0; i < N; i++) {
            if (cranes[i] >= box && min > times[i]) {
                [min, idx] = [times[i], i];
            }
        }

        if (idx === -1) return -1;
        times[idx]++;
    }

    return Math.max(...times);
}
