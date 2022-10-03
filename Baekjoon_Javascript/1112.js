const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');
const [x, b] = input.map(v => +v);

const solution = (x, b) => {
    let answer = '';
    if(b > 0) return x.toString(b);
    if(x === 0) return '0';
    while(x) {
        let rem = x % b;
        if(rem < 0) rem -= b;
        x = (x-rem) / b;
        answer = rem + answer;
    }

    return answer;
}

console.log(solution(x, b));