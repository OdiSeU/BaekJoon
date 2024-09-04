// https://www.acmicpc.net/problem/30876

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const stations = file.split('\n').map((v) => v.split(' ').map(Number));

function solution(stations) {
    let southest = [Infinity, Infinity];

    for (const [x, y] of stations) {
        if (southest[1] > y) {
            southest = [x, y];
        }
    }

    return southest.join(' ');
}

console.log(solution(stations));
