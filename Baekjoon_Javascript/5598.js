const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (pwd) => {
    const encrypt = (c) => {
        let a = 'A'.charCodeAt();
        let x = c.charCodeAt() - a;
        
        return String.fromCharCode(a + (x + 23) % 26);
    }

    return [...pwd].map(encrypt).join('');
}

console.log(solution(input));