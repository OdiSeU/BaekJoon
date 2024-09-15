const path = process.platform === 'linux' ? 0 : `${__dirname}/input.txt`;
const file = require('fs').readFileSync(path, 'utf-8').trim();

const [[N], ...inputs] = file.split('\n').map((line) => line.split(' ').map(BigInt));

console.log(inputs.map(solution).join('\n'));

function solution([lt, wt, le, we]) {
    const [resultT, resultE] = [lt * wt, le * we];

    if (resultT < resultE) return 'Eurecom';
    if (resultT > resultE) return 'TelecomParisTech';
    return 'Tie';
}
