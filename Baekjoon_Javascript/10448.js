let input = require('fs').readFileSync('/dev/stdin').toString().trim();

let [T, ...cases] = input.split('\n').map(v=>+v);
let triNums = [0];

for(let i = 1, n = 1; n <= 1000; ++i, n+=i) {
    triNums.push(n);
}

const solution = (x) => {
    let n = Math.floor((Math.sqrt(1 + 8 * x) - 1) / 2);

    for(let i = n; i > 0; i--) {
        for(let j = n; j > 0; j--) {
            for(let k = n; k > 0; k--) {
                if(triNums[i] + triNums[j] + triNums[k] === x) return 1;
            }
        }
    }

    return 0;
}

console.log(cases.map(v => solution(v)).join('\n'));