const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const T = +input[0];

const solution = (ranks) => {
    let sorted = ranks.map(v => v.split(' ').map(v=>+v)).sort((a,b)=>a[0]-b[0]);
    let answer = 1, min = sorted[0][1];

    for(let i = 1; i < sorted.length; i++) {
        if(min > sorted[i][1]) {
            min = sorted[i][1];
            answer++;
        }
    }
    
    return answer;
}

for(let t = 0, i = 1; t < T; t++) {
    let N = +input[i++];
    console.log(solution(input.slice(i, i+N)));
    i += N;
}