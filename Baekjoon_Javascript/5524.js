const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const soluton = (str) => str.toLowerCase();

console.log(input.slice(1).map(v => soluton(v.trim())).join('\n'));