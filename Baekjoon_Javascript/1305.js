const file = require('fs').readFileSync('/dev/stdin')
const input = file.toString().trim().split('\n');

const solution = (s) => {
    let i = -1, j = 0;
    let len = s.length;
    let pi = Array(len+1);

    pi[0] = -1;

    while(j < len) {
        if(i === -1 || s[i] === s[j]) {
            pi[++j] = ++i;
        }
        else i = pi[i];
    }

    return len - pi[len];
}

console.log(solution(input[1]))