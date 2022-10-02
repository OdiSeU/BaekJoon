const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');
const [N, K, M] = input.map(v=>+v);

const solution = (N, K, M) => {
    let answer = 0;
    let count = N;

    while(++answer <= N) {
        let rmIdx = count > K ? K : (K-1) % count + 1;
        
        if(count == 1 || M === rmIdx) break;
        else if(M > rmIdx) M -= rmIdx;
        else M += count - rmIdx;
        count--;
    }

    return answer;
}

console.log(solution(N, K, M));