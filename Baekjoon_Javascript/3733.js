const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (data) => {
    let [a, b] = data.split(' ').map(v=>+v);
    return Math.floor(b / (a+1));
}

console.log(input.map(v => solution(v)).join('\n'));