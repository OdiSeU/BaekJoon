const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (n) => {
    let answer = 0, bird = 1;
    while(1) {
        n -= bird++;
        answer++;
        if(n <= 0) break;
        if(n < bird) bird = 1;
    }
    return answer;
}

console.log(solution(+input));