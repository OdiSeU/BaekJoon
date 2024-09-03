// https://www.acmicpc.net/problem/29751

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [W, H] = file.split(' ').map(Number);

console.log(((W * H) / 2).toFixed(1));
