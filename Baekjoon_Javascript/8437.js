const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (a, b) => {
    a = BigInt(a), b = BigInt(b);
    return `${((a+b)/2n).toString()}\n${((a-b)/2n).toString()}`;
}

console.log(solution(...input));