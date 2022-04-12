let input = require('fs').readFileSync('/dev/stdin').toString();

let [T, ...cases] = input.split('\r\n');
const solution = (cmd) => {
    let result = +cmd[0];
    for(let i = 1; i < cmd.length; i++) {
        switch (cmd[i]) {
            case '@': result *= 3; break;
            case '%': result += 5; break;
            case '#': result -= 7; break;
        }
    }
    return result;
}

let results = cases.map(v => solution(v.split(' ')).toFixed(2));

console.log(results.join('\n'));