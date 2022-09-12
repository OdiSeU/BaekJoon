const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (nums) => {
    let counts = new Map();
    let answer = [0, 0];

    nums.forEach(v => {
        let n = (counts.get(v) || 0n) + 1n;
        counts.set(v, n);

        if(answer[1] < n || answer[1] === n && answer[0] > v) {
            answer = [v, n];
        }
    });

    return answer[0].toString();
}

console.log(solution(input.slice(1).map(v=>BigInt(v))));