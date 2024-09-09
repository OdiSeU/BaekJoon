const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const lines = file.split('\n').map((line) => line.split(' ').map(Number));

const [_, A, B] = lines;

console.log(solution(A, B));

function solution(A, B) {
    const [setA, setB] = [new Set(A), new Set(B)];

    const union = (set1, set2) => new Set([...set1, ...set2]);
    const diff = (set1, set2) => new Set([...set1].filter((v) => !set2.has(v)));

    return union(diff(setA, setB), diff(setB, setA)).size;
}
