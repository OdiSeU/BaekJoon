// https://www.acmicpc.net/problem/11778

const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();
const [n, m] = file.split(' ').map(BigInt);


const matMult = (m1, m2) => {
    let row = m1.length, col = m2[0].length, n = m2.length;
    let result = Array.from(Array(row), ()=>Array(col).fill(0n));

    for(let i = 0; i < row; i++) {
        for(let j = 0; j < col; j++) {
            for(let k = 0; k < n; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
                result[i][j] %= 1000000007n;
            }
        }
    }

    return result;
}

const power = (base, exp) => {
    if(exp === 0n) return base.map(v => v.fill(0n));
    if(exp === 1n) return base;
    let sqrt = power(base, exp/2n);
    if(!(exp % 2n)) return matMult(sqrt, sqrt);
    return matMult(matMult(sqrt, sqrt), base);
}

const gcd = (a, b) => b ? gcd(b, a%b) : a;

const solution = (n) => power([[1n,1n],[1n,0n]], n)[1][0];
console.log(`${solution(gcd(n, m))}`);