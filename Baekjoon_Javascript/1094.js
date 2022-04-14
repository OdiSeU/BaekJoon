let input = require('fs').readFileSync('/dev/stdin').toString();

console.log([...(+input).toString(2)].filter(v => v === '1').length);