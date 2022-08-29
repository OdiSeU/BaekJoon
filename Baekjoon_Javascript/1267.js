let input = require('fs').readFileSync('/dev/stdin').toString().trim();

const times = input.split('\r\n')[1].trim().split(' ').map(v=>+v);

const solution = (times) => {
    const getPay = (time, cost, total) => {
        return ((total / time | 0) + 1) * cost;
    }
    let y = 0, m = 0;
    
    times.forEach(t => {
        y += getPay(30, 10, t);
        m += getPay(60, 15, t);
    });

    if(y < m) return 'Y ' + y;
    else if(m < y) return 'M ' + m;
    else return 'Y M ' + y;
}

console.log(solution(times));