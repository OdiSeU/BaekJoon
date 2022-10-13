const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');

const [A, B] =input.map(v => BigInt(v));

const solution = (A, B) => {
    const f = (n) => {
        let bit = 1n, sum = 0n;

        while(n) {
            sum += bit * (n - (n / 2n));
            n /= 2n;
            bit *= 2n;
        }

        return sum;
    }

    return `${f(B) - f(A-1n)}`;
}

console.log(solution(A, B));