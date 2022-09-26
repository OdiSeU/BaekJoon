const input = require('fs').readFileSync('/dev/stdin').toString().trim();

const solution = (name) => {
    let countOdd = 0, oddAlpha = '';
    let alphabets = new Map();
    
    for(let i = 0; i < name.length; i++) {
        let cnt = alphabets.get(name[i]) | 0;
        alphabets.set(name[i], cnt+1);
        (cnt+1) % 2 ? countOdd++ : countOdd--;
    }

    alphabets = [...alphabets].sort((a, b) => a[0] < b[0] ? -1 : 1);
    
    if(countOdd > 1) return "I'm Sorry Hansoo";
    else if(countOdd) {
        for(let i = 0; i < alphabets.length; i++) {
            if(alphabets[i][1] % 2) {
                oddAlpha = alphabets[i][0];
                alphabets[i][1] -= 1;
                break;
            }
        }
    }

    let left = alphabets.reduce((acc , v) => acc + v[0].repeat(v[1]/2), '');

    return left + oddAlpha + [...left].reverse().join('');
}

console.log(solution(input));