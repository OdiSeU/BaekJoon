const input = require('fs').readFileSync('/dev/stdin').toString().trim();
const rings = input.split('\n')[1].split(' ').map(v=>+v);

const solution = (rings) => {
    const getGCD = (a, b) => b ? getGCD(b, a%b) : a;
    const std = rings[0];

    return rings.slice(1).map(v => {
        let gcd = getGCD(std, v);
        return (std / gcd) + '/' + (v / gcd);
    }).join('\n');
}

console.log(solution(rings));