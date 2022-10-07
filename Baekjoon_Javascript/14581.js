const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

const solution = (id) => `:fan::fan::fan:\n:fan::${id}::fan:\n:fan::fan::fan:`;

console.log(solution(input));