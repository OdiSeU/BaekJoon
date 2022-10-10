const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');
const [A, B] = input.map(v => BigInt(v));

const solution = (A, B) => {
    const dp = {'0':0n, '1':1n};
    const func = (n) => {
        if(dp[n] !== undefined) return dp[n];
        let x = 1n << BigInt(n.toString(2).length-1);
        return dp[n] = func(x-1n) + func(n-x) + (n-x+1n);
    }

    return `${func(B) - func(A-1n)}`;
}

console.log(solution(A, B));