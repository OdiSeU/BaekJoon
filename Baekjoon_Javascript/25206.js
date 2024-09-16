// https://www.acmicpc.net/problem/25206

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const scores = file.split('\n').map((line) => line.split(' '));

console.log(solution(scores));

function solution(scores) {
    const map = { 'A+': 4.5, A0: 4.0, 'B+': 3.5, B0: 3.0, 'C+': 2.5, C0: 2.0, 'D+': 1.5, D0: 1.0, F: 0.0 };
    let sumOfCredit = 0;
    let sumOfGrade = 0;

    for (const [_, credit, grade] of scores) {
        if (grade === 'P') continue;
        sumOfCredit += +credit;
        sumOfGrade += map[grade] * +credit;
    }

    return sumOfGrade / sumOfCredit;
}
