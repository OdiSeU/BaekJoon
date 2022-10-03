const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const people = input[0].split(' ').map(v=>+v);
const [x, y, r] = input[1].split(' ').map(v=>+v);

const solution = (people, x) => people.indexOf(x)+1;

console.log(solution(people, x));