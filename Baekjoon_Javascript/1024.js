const p = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const f = require('fs').readFileSync(p, 'utf-8').trim();

const [N, L] = f.split(' ').map(Number);

console.log(solution(N, L));

function solution(N, L) {
    let firstN = -1;

    for (; L <= 100; L++) {
        const x = (2 * N + L - L * L) / (2 * L);

        if (Number.isInteger(x)) {
            firstN = x;
            break;
        }
    }

    if (firstN < 0) return -1;

    return Array.from(Array(L), (_, i) => firstN + i).join(' ');
}
