const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (content) => {
    let [num, st, ma, te] = content.split(' ').map(v => +v);
    let sum = st + ma + te;
    let state = 'PASS';

    if(sum < 55 || st < 10.5 || ma < 7.5 || te < 12)
        state = 'FAIL';

    return `${num} ${sum} ${state}`;
}

console.log(input.slice(1).map(v => solution(v)).join('\n'));