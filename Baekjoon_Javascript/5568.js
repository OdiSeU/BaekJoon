// https://www.acmicpc.net/problem/5568

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [_, k, ...cards] = file.split('\n').map(Number);

function solution(k, cards) {
    const set = new Set();
    let str = [];

    const combine = (left, depth) => {
        if (depth === 0) {
            set.add(str.join(''));
            return;
        }
        for (let i = 0; i < left.length; i++) {
            str.push(left[i]);
            combine([...left.slice(0, i), ...left.slice(i + 1)], depth - 1);
            str.pop();
        }
    };

    combine(cards, k);

    return set.size;
}

console.log(solution(k, cards));
