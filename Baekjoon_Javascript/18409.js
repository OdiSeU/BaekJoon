const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const solution = (str) => str.match(/[aiueo]/g)?.length || 0;

console.log(solution(input[1]));