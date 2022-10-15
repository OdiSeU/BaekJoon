const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const matMult = (m1, m2) => {
    let row = m1.length, col = m2[0].length, n = m2.length;
    let result = Array.from(Array(row), ()=>Array(col).fill(0));

    for(let i = 0; i < row; i++) {
        for(let j = 0; j < col; j++) {
            for(let k = 0; k < n; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
                result[i][j] %= 1000000;
            }
        }
    }

    return result;
}

const power = (base, exp) => {
    if(exp === 0n) return base.map(v => v.fill(0));
    if(exp === 1n) return base;
    let sqrt = power(base, exp/2n);
    if(!(exp % 2n)) return matMult(sqrt, sqrt);
    return matMult(matMult(sqrt, sqrt), base);
}

const solution = (n) => power([[1,1],[1,0]], n)[1][0];

console.log(solution(BigInt(input)));