const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (N, r, c) => {
    let answer = 0;
    for(let i = 0, bit = 1; i < N; i++, bit<<=1) {
        answer |= ((r&bit)*2 + (c&bit)) << i;
    }
    return answer;
}

console.log(solution(...input.split(' ').map(v => +v)))