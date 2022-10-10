const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');

const [X, K] = input.map(v=>BigInt(v));

const solution = (X, K) => {
    let str = '';

    while(K) {
        if(X & 1n) str = '0' + str;
        else {
            str = (K & 1n) + str;
            K >>= 1n;
        }
        X >>= 1n;
    }

    return `${BigInt('0b'+str)}`;
}

console.log(solution(X, K));