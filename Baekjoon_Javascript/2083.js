const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const solution = (member, age, weight) => {
    let grade = +age > 17 || +weight >= 80 ? 'Senior' : 'Junior';
    return member + ' ' + grade;
}

console.log(input.slice(0, -1).map(v => solution(...v.split(' '))).join('\n'));