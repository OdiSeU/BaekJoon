let input = require('fs').readFileSync('/dev/stdin').toString();

let n = BigInt(input);

const matMult = (m1, m2) => {
    let row = m1.length, col = m2[0].length, n = m2.length;
    let result = Array.from(Array(row), ()=>Array(col).fill(0n));

    for(let i = 0; i < row; i++) {
        for(let j = 0; j < col; j++) {
            for(let k = 0; k < n; k++) {
                result[i][j] += BigInt(m1[i][k]) * BigInt(m2[k][j]);
                result[i][j] %= 1000000007n;
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

console.log(power([[1,1],[1,0]], n)[1][0].toString());