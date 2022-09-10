const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (str) => {
    let now = '', cnt = [0,0];

    for(let c of str) {
        if(now !== c) {
            now = c;
            cnt[+now]++;
        }
    }

    return Math.min(...cnt);
}

console.log(solution(input));