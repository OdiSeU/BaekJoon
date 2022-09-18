const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (logs) => {
    let member = new Set();

    logs.forEach(log => {
        let [name, state] = log.split(' ');
        
        switch(state.trim()) {
            case 'enter': member.add(name); break;
            case 'leave': member.delete(name); break;
        }
    });

    return [...member].sort((a,b)=>a < b ? 1 : -1).join('\n');
}


console.log(solution(input.slice(1)));