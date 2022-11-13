const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (text) => {
    let max = 0;
    let dict = new Map();
    const asciiA = 'a'.charCodeAt();
    const asciiZ = 'z'.charCodeAt();

    const maxChars = [];

    for(let c of text) {
        const code = c.charCodeAt();
        if(asciiA <= code && code <= asciiZ) {
            const count = (dict.get(c) || 0) + 1
            dict.set(c, count);
            max = Math.max(count, max);
        }
    }

    for(let [k, v] of dict) {
        if(v === max) maxChars.push(k);
    }

    return maxChars.sort().join('');
}

console.log(solution(input));