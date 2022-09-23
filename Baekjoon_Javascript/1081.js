const input = require('fs').readFileSync('/dev/stdin').toString().trim();
const [L, U] = input.split(' ');

const getCounts = (N) => {
    let counts = Array(10).fill(0);
    let len = 0, digit = 1, num = +N;

    for(let i = N.length-1; i >= 0; i--, len++, digit *= 10) {
        let now = +N[i];
        for(let j = 0; j < 10; j++) {
            counts[j] += now * len * digit / 10;
            if(j < now) counts[j] += digit;
            else if (j === now) {
                counts[j] += (num % digit) + 1;
            }
        }
    }
    
    counts[0] -= (digit - 1) / 9 ;

    return counts;
}

const solution = (L, U) => {
    let countsL = getCounts(+L?`${+L-1}`:L);
    let countsU = getCounts(U);
    let sum = 0;

    for(let i = 1; i < 10; i++) {
        sum += (countsU[i] - countsL[i]) * i;
    }

    return sum;
}

console.log(solution(L, U));