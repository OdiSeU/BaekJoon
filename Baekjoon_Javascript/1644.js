const file = require('fs').readFileSync('/dev/stdin');
const input = file.toString().trim();

function getPrimes(max) {
	let seive = Array(max+1);
    let primes = [];
    
	for(let i = 2; i <= max; i++) {
		if(seive[i]) continue;
        primes.push(i);
		for(let j = i * i; j <= max; j+=i) {
            seive[j] = true;
        }
	}
	return primes;
}

const solution = (N) => {
    const primes = getPrimes(N);
    let answer = 0;
    let sum = primes[0];
    let left = 0, right = 1;

    while(right <= primes.length) {
        if(sum < N) {
            sum += primes[right++];
        }
        else {
            if(sum === N) answer++;
            sum -= primes[left++];
        }
    }
    return answer;
}

console.log(solution(+input));