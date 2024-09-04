const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const input = file.split('\n').map((line) => line.split(' ').map(Number));
let output = [];

for (let i = 0; ; i += 3) {
    const [nx, ny, w] = input[i];
    if (nx + ny + w === 0) break;

    const xis = input[i + 1];
    const yis = input[i + 2];

    output.push(solution(nx, ny, w, xis, yis));
}

console.log(output.join('\n'));

function solution(nx, ny, w, xis, yis) {
    const sortedX = xis.sort((a, b) => a - b);
    const sortedY = yis.sort((a, b) => a - b);

    if (sortedX[0] > w / 2 || sortedY[0] > w / 2) {
        return 'NO';
    }
    if (sortedX[nx - 1] < 75 - w / 2 || sortedY[ny - 1] < 100 - w / 2) {
        return 'NO';
    }

    for (let i = 0; i < nx - 1; i++) {
        if (sortedX[i + 1] - sortedX[i] > w) {
            return 'NO';
        }
    }

    for (let i = 0; i < ny - 1; i++) {
        if (sortedY[i + 1] - sortedY[i] > w) {
            return 'NO';
        }
    }

    return 'YES';
}
