const input = require('fs').readFileSync('/dev/stdin').toString();
const scores = input.split('\n').map(v=>+v);

const solution = (scores) => {
    const compare = (a, b) => {
        let x = Math.abs(100 - a);
        let y = Math.abs(100 - b);
        if(x < y) return a;
        if(x > y) return b;
        return Math.max(a, b);
    }
    let answer = 0, sum = 0;
    let len = scores.length;

    for(let i = 0; i < len; i++) {
        sum += scores[i];
        if(sum > 100) {
            answer = compare(sum, sum - scores[i]);
            break;
        }
    }

    return answer ? answer : sum;
}

console.log(solution(scores));