const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (n) => {
    let bf = 0n, now = 1n;
    if(n === 0) return 0;
    for(let i = 2; i <= n; i++) {
        [bf, now] = [now, bf + now];
    }

    return `${now}`;
}

console.log(solution(+input));