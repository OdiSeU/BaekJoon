// https://www.acmicpc.net/problem/26711

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [A, B] = file.split('\n').map(BigInt);

console.log(`${A + B}`);
