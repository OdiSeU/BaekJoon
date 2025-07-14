const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const inputs = file.split('\n').slice(0, -1);
const results = [];

for (let i = 0; i < inputs.length; i++) {
    results.push(solution(inputs[i].split(' ').map(Number)));
}

console.log(results.join('\n'));

function solution(numbers) {
    let result = 0;
    const set = new Set(numbers);

    for (let i = 0; i < numbers.length - 1; i++) {
        if (set.has(numbers[i] * 2)) result++;
    }

    return result;
}
