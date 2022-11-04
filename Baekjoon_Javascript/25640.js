const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const jinho = input[0].trim();
const friends = input.slice(2);

const solution = (jinho, friends) => friends.filter(v => v.trim() === jinho).length;

console.log(solution(jinho, friends));