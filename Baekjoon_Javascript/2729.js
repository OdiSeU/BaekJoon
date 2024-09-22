const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const inputs = file
    .split('\n')
    .slice(1)
    .map((line) => line.split(' '));

console.log(solution(inputs));

function solution(inputs) {
    return inputs.map(([a, b]) => (BigInt('0b' + a) + BigInt('0b' + b)).toString(2)).join('\n');
}
