const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');
const [N, k] = input.map(v=>+v);

const solution = (N, k) => {
    let left = 1, right = k;
    
    while(left <= right) {
        let mid = Math.floor((left + right)/2);
        let cnt = 0;
        for(let i = 1; i <= N; i++) {
            cnt += Math.min(Math.floor(mid/i), N);
        }
        if(cnt < k) left = mid+1;
        else right = mid-1;
    }

    return left;
}

console.log(solution(N, k));