const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (N) => {
    let counts = Array(10).fill(0);
    let len = 0, digit = 1;
    let num = +N;

    for(let i = N.length-1; i >= 0; i--) {
        let now = +N[i];
        for(let j = 0; j < 10; j++) {
            counts[j] += now * len * digit / 10;
            if(j < now) counts[j] += digit;
            else if (j === now) {
                counts[j] += (num % digit) + 1;
            }
        }

        len++; digit *= 10;
    }
    
    counts[0] -= (digit - 1) / 9 ;

    return counts.join(' ');
}

console.log(solution(input));