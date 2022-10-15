const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split('\n');

const arrD = input[1].split(' ').map(v=>BigInt(v));
const arrM = input[2].split(' ').map(v=>BigInt(v));

const GCD = (a, b) => b ? GCD(b, a%b) : a;
const LCM = (a, b) => a * b / GCD(a, b);

const solution = (arrD, arrM) => {
    const lcmD = arrD.reduce((acc, v) => LCM(acc, v), arrD[0]);
    const gcdM = arrM.reduce((acc, v) => GCD(acc, v), arrM[0]);

    if(gcdM % lcmD) return 0;

    const num = gcdM / lcmD;
    let answer = 0;
    
    for(let i = 1n; i * i <= num; i++) {
        if(num % i === 0n) {
            answer++;
            if(i * i < num) {
                answer++;
            }
        }
    }

    return answer;
}

console.log(solution(arrD, arrM));