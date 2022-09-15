const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const [a, b] = input[0].split(' ').map(v=>+v);
const [c, d] = input[1].split(' ').map(v=>+v);

const solution = (a, b, c, d) => {
    const [x, y] = [a * d + b * c, b * d];
    const getGCD = (a, b) => b ? getGCD(b, a%b) : a;
    const gcd = getGCD(x, y);

    return `${x / gcd} ${y / gcd}`;
}

console.log(solution(a, b, c, d));