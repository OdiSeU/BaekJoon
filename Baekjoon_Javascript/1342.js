const p = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const f = require('fs').readFileSync(p, 'utf-8').trim();

console.log(solution(f));

function solution(S) {
    const lucky = new Set();
    const hist = new Array(S.length);

    const permu = (now, depth) => {
        if (!depth) {
            lucky.add(now);
        }
        for (let i = 0; i < S.length; i++) {
            if (!hist[i] && now[0] !== S[i]) {
                hist[i] = true;
                permu(S[i] + now, depth - 1);
                hist[i] = false;
            }
        }
    };

    permu('', S.length);

    return lucky.size;
}
