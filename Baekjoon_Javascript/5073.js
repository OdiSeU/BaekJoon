// https://www.acmicpc.net/problem/5073

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const output = [];

for (const input of file.split('\n')) {
    const result = solution(input.split(' ').map(Number));
    if (result) output.push(result);
}

console.log(output.join('\n'));

function solution(input) {
    const [A, B, C] = input.sort((a, b) => a - b);

    if (A + B + C === 0) return;
    if (A + B <= C) return 'Invalid';
    if (A === B && B === C) return 'Equilateral';
    if (A !== B && B !== C) return 'Scalene';
    return 'Isosceles';
}
