const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const [N, M] = input[0].split(' ').map(v => +v);
const city = input.slice(1).map(v=>v.split(' '))

const solution = (N, M, city) => {
    const getDist = (a, b) => Math.abs(a[0]-b[0]) + Math.abs(a[1]-b[1]);
    const getMinDist = (house, chickens) => {
        return chickens.reduce((acc, chicken) => Math.min(acc, getDist(house, chicken)), Infinity);
    }
    const chickens = [], houses = [], selected = [];
    let answer = Infinity;

    for(let i = 0; i < N; i++) {
        for(let j = 0; j < N; j++) {
            switch(+city[i][j]) {
                case 1: houses.push([i, j]); break;
                case 2: chickens.push([i, j]); break;
            }
        }
    }

    const dfs = (depth, idx) => {
        if(depth === M) {
            let sum = houses.reduce((acc, i) => acc + getMinDist(i, selected), 0);
            answer = Math.min(answer, sum);
            return;
        }
        for(let i = idx; i < chickens.length; i++) {
            selected.push(chickens[i]);
            dfs(depth+1, i+1);
            selected.pop();
        }
    }

    dfs(0, 0);

    return answer;
}

console.log(solution(N, M, city));