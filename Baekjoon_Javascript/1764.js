const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');
const [N, M] = input[0].split(' ').map(v=>+v);

const solution = (arr1, arr2) => {
    const intersection = (set1, set2) =>
        new Set([...set1].filter(v => set2.has(v)));
    let answer = intersection(new Set(arr1), new Set(arr2));

    return answer.size + '\n' + [...answer].sort().join('\n');
}

console.log(solution(input.slice(1,1+N), input.slice(1+N)));