const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (scores) => {
    let answer = [100, 100];
    scores.forEach(v => {
        let [a, b] = v.split(' ').map(v => +v);
        if(a > b) answer[1] -= a;
        else if(b > a) answer[0] -= b;
    });

    return answer.join('\n');
}

console.log(solution(input.slice(1)))