const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim().split(' ');
const [A, B] = input.map(v => BigInt(v));

const getPrimes = (max) => {
	let seive = Array.from(Array(max+1), (_,i)=>i);
	seive[1] = 0;
	for(let i = 2; i * i <= max; i++) {
		if(!seive[i]) continue;
		for(let j = i * i; j <= max; j+=i) seive[j] = 0;
	}
	return seive.filter(v => v);
}

const countPow = (n, x) => {
    let cnt = 0;
    while(n /= x) cnt++;
    return Math.max(cnt-1, 0);
}

const solution = (A, B) => {
    let answer = 0;

    for(let x of getPrimes(10000000)) {
        x = BigInt(x);
        if(x * x > B) break;
        answer += countPow(B, x) - countPow(A-1n, x);
    }

    return answer;
}

console.log(solution(A, B));