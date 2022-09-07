const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (clothes) => {
    let combi = new Map();
    for(let i = 0; i < clothes.length; i++) {
        let type = clothes[i].split(' ')[1].trim();
        let cnt = combi.get(type);
        if(cnt) combi.set(type, cnt+1);
        else combi.set(type, 1);
    }

    return [...combi.values()].reduce((acc, v) => acc * (v + 1), 1) - 1;
}

let cases = [];

for(let i = 1; i < input.length;) {
    let n = +input[i++];
    cases.push(input.slice(i, i+n));
    i += n;
}

console.log(cases.map(v => solution(v)).join('\n'));