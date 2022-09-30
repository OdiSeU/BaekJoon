const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (n) => {
    let answer = 1;

    for(let i = 2; i <= n; i++) {
        answer = (answer * i) % 10;
    }

    return answer;
}

console.log(solution(+input));