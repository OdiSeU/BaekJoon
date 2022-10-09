const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const [N, K] = input[0].split(' ').map(v=>+v);

const solution = (N, K, words) => {
    const wordToBit = (word) => {
        let bit = 0;
        for(let i = 0; i < word.length; i++) {
            bit |= 1 << (word.charCodeAt(i) - 'a'.charCodeAt());
        }
        return bit;
    }

    const bits = words.map(w => wordToBit(w.trim()));
    let max = 0;
    if(K < 5) return 0;
    if(K === 26) return N;

    const backTracking = (bit, i, depth) => {
        if(depth <= 0) {
            let cnt = bits.filter(v => (v | bit) === bit).length;
            max = Math.max(max, cnt);
            return;
        }
        for(; i < (1 << 26); i <<= 1) {
            if(!(bit & i)) {
                backTracking(bit | i, i<<1, depth-1);
            }
        }
    }

    backTracking(wordToBit('acint'), 1, K-5);

    return max;
}

console.log(solution(N, K, input.slice(1)));