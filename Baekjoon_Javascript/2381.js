const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (points) => {
    let addMax = subMax = -123456789;
    let addMin = subMin = 123456789;
    points.forEach(v => {
        let [a, b] = v.split(' ').map(v => +v);
        addMax = Math.max(addMax, a+b);
        addMin = Math.min(addMin, a+b);
        subMax = Math.max(subMax, a-b);
        subMin = Math.min(subMin, a-b);
    });

    return Math.max(addMax-addMin, subMax-subMin);
}

console.log(solution(input.slice(1)))