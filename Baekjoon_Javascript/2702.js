const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (a, b) => {
    const GCD = (a, b) => b ? GCD(b, a%b) : a;
    const LCM = (a, b) => a * b / GCD(a, b);
    return LCM(a, b) + ' ' + GCD(a, b);
}

console.log(input.slice(1).map(v => solution(...v.split(' ').map(v =>+v))).join('\n'));