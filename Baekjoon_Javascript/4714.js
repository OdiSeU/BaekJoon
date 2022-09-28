const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (n) =>
    `Objects weighing ${n.toFixed(2)} on Earth will weigh ${(n*0.167).toFixed(2)} on the moon.`

console.log(input.slice(0,-1).map(v => solution(+v)).join('\n'));