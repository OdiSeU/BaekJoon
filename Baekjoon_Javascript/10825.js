const input = require('fs').readFileSync('/dev/stdin').toString().trim();
let students = input.split('\n').slice(1).map(v => {
    let [name, kor, eng, math] = v.split(' ');
    return { name, kor, eng, math };
});

const solution = (students) => {
    students.sort((a, b) => {
        if(b.kor !== a.kor) return b.kor - a.kor;
        if(a.eng !== b.eng) return a.eng - b.eng;
        if(b.math !== a.math) return b.math - a.math;
        return a.name < b.name ? -1 : 1;
    });
    
    return students.map(v => v.name).join('\n');
}

console.log(solution(students));