const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [N, M] = input[0].split(' ').map(v => +v);
const mat1 = input.slice(1, N + 1).map(v => v.split(' ').map(v => +v));
const [_, K] = input[N + 1].split(' ').map(v => +v);
const mat2 = input.slice(N + 2).map(v => v.split(' ').map(v => +v));

const solution = (N, M, K, mat1, mat2) => {
    let result = Array.from(Array(N), ()=>Array(K).fill(0));
    
    for(let a = 0; a < N; a++) {
        for(let b = 0; b < K; b++) {
            for(let c = 0; c < M; c++) {
                result[a][b] += mat1[a][c] * mat2[c][b];
            }
        }
    }

    return result.map(v => v.join(' ')).join('\n');
}

console.log(solution(N, M, K, mat1, mat2));