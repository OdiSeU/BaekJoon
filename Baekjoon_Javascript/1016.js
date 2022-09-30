const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();
const [min, max] = input.split(' ').map(v => +v);

const solution = (min, max) => {
    let checks = Array(max-min+1);
    let count = max-min+1;
    for(let i = 2, square = 4; square <= max; square = (++i)**2) {
        for(let j = square*Math.ceil(min/square); j <= max; j += square) {
            if(checks[j-min]) continue;
            checks[j-min] = 1;
            count--;
        }
    }
    
    return count;
}

console.log(solution(min, max));