const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [a, b] = input.map(v=>+v);

const solution = (a, b) => {
    let answer = [];
    if(3<=a && b <= 4) answer.push('TroyMartian');
    if(a<=6 && 2 <= b) answer.push('VladSaturnian');
    if(a<=2 && b <= 3) answer.push('GraemeMercurian');
    
    return answer.join('\n');
}

console.log(solution(a, b));