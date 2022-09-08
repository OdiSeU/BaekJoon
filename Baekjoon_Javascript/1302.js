const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (titles) => {
    let count = new Map();
    let answer = ['', 0];

    for(let i = 0; i < titles.length; i++) {
        let title = titles[i];
        let n = (count.get(title) | 0) + 1;
        count.set(title, n);
        if(answer[1] < n || answer[1] === n && title < answer[0]) {
            answer = [title, n];
        }
    }

    return answer[0];
}

console.log(solution(input.slice(1).map(v=>v.trim())));