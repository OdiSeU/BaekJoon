const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const soltuion = (nums) => {
    let counts = new Map();
    let noZero = new Set();

    for(let i = 65; i <= 74; i++) {
        counts.set(String.fromCharCode(i), 0);
    }

    nums.forEach(n => {
        n = n.trim();
        noZero.add(n[0]);
        for(let i = 0; i < n.length; i++) {
            let x = 10 ** (n.length - i - 1);
            counts.set(n[i], counts.get(n[i]) + x);
        }
    });

    let sorted = [...counts].sort((a, b) => a[1] - b[1]);
    
    for(let i = 0; i < sorted.length; i++) {
        if(!noZero.has(sorted[i][0])) {
            sorted.splice(i,1);
            break;
        }
    }

    return sorted.reduce((acc, v, i) => acc + v[1] * (i+1), 0);
}

console.log(soltuion(input.slice(1)));