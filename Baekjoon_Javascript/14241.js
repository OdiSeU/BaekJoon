const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const slimes = file.split('\n')[1].split(' ').map(Number);

console.log(solution(slimes));

function solution(slimes = []) {
    let score = 0;
    let sum = 0;

    for (const slime of slimes) {
        score += sum * slime;
        sum += slime;
    }

    return score;
}
