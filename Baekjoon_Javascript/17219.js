const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const [N, M] = input[0].split(' ').map(v=>+v);

const solution = (saves, finds) => {
    let passwords = new Map();

    saves.forEach(v => {
        let [addr, pwd] = v.split(' ');
        passwords.set(addr, pwd);
    });

    return finds.map(v => passwords.get(v.trim())).join('\n');
}

console.log(solution(input.slice(1,N+1), input.slice(N+1)));