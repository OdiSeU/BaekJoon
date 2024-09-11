// https://www.acmicpc.net/problem/28235

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

console.log(solution(file));

function solution(input) {
    const cmd = {
        SONGDO: 'HIGHSCHOOL',
        CODE: 'MASTER',
        2023: '0611',
        ALGORITHM: 'CONTEST',
    };

    return cmd[input];
}
